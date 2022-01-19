#include<bits/stdc++.h>
using  namespace std;

int dp[100][100];
int f(int csum[],int i,int j)
{
	if(i==j)
		return 0;
    if(dp[i][j]!=-1)
    	return dp[i][j];
	int count=0;
	int mx =0;
	for(int k= i;k<j;k++)
	{
		count =0;
		int a =csum[k+1]-csum[i];
		int b = csum[j+1]-csum[k+1];
		if(a==b){
		   count = max(f(csum,i,k),f(csum,k+1,j))+1;
		  mx = max(count,mx); 
		}
	}
	return dp[i][j]=mx;
}

int main()
{
#ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
#endif
  
  int t;
  cin>>t;
  while(t--)
  {
  	memset(dp,-1,sizeof(dp));
  	 int n;
  	 cin>>n;
  	 int arr[n];
  	 int csum[n+1];
  	 csum[0]=0;
  	 for(int i=0;i<n;i++){
  	 	cin>>arr[i];
  	 	csum[i+1]=csum[i]+arr[i];
  	 }

     cout<<f(csum,0,n-1)<<endl;

  	 

  }


}