#include<bits/stdc++.h>
using namespace std;


int sol(int arr[],int n)
{
	 int sum=0,mx=INT_MIN;
	 for(int i=0;i<n;i++)
	 {
	 	sum+=arr[i];
	 	mx = max(mx,sum);
	 	if(sum<0)
	 		sum=0;

	 }
	 return mx;
}

int sol_dp(int arr[],int n)
{
   int dp[n]={0};
   dp[0] = arr[0]>0?arr[0]:0;
   int mx=INT_MIN;
   mx = max(arr[0],mx);
   for(int i=1;i<n;i++)
   {
   	  dp[i] = dp[i-1]+arr[i];
   	  mx = max(mx,dp[i]);
   	  if(dp[i]<0)
   	  	dp[i]=0;

   }
   return mx;

}

int main()
{
	int n;
	cin>>n;
	int *arr = new int[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
    cout<<sol_dp(arr,n);

}