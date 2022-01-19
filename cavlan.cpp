#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	int arr[n+1];
	for(int i=1;i<=n;i++)
		cin>>arr[i];

	int dpf[n+1]={0};
	dpf[k]=0;
	dpf[k+1]=arr[k+1];
	for(int i=k+2;i<=n;i++){
        dpf[i] = arr[i]+max(dpf[i-1],dpf[i-2]);
        cout<<dpf[i]<<" ";
	}
	cout<<endl;
    int dpb[n+1];
    dpb[1]=arr[1];
    dpb[2]=arr[2]+arr[1];
    for(int i=3;i<=n;i++){
    	dpb[i] = arr[i]+max(dpb[i-1],dpb[i-2]);
    	cout<<dpb[i]<<" ";
    }

    int ans=INT_MIN;
    for(int i = k;i<=n;i++)
    {
    	ans = max(ans,dpb[i]+dpf[i]-arr[i]);
    }
    cout<<ans;
	
}