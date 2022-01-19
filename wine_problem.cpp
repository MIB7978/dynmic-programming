#include<bits/stdc++.h>
using namespace std;

int f(int arr[],int be,int end,int year)
{
	if(be>end)
		return 0;
    int a = arr[be]*year+f(arr,be+1,end,year+1);
    int b = arr[end]*year+ f(arr,be,end-1,year+1);
    return max(a,b); 

}

int main()
{
	 int n;
	 cin>>n;
	 int arr[n];
	 for(int i=0;i<n;i++)
	 	cin>>arr[i];
     cout<<f(arr,0,n-1,1);

}