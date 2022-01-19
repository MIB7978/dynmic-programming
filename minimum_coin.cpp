#include<bits/stdc++.h>
using namespace std;

int dp[100][100];
int f(int arr[],int n, int sum)
{
	 if(sum==0)
	 	return 0;
	 if(n==0)
	 	return INT_MAX;
	 if(dp[n][sum]!=-1)
	 	return dp[n][sum];
	 if(sum>=arr[n-1])
	 	return dp[n][sum]=min(1+f(arr,n,sum-arr[n-1]),f(arr,n-1,sum));
	 else 
	 	return dp[n][sum]=f(arr,n-1,sum);
}

int f_dp(int n,int sum,int arr[])
{
   int dp[sum+1]={0};
   for(int i=1;i<=sum;i++)
   {
   	int ans= INT_MAX;
   	 for(int j=0;j<n;j++)
   	 {
   	 	 
   	 	  if(i>=arr[j])
   	 	  {
               ans = min(ans,1+dp[i-arr[j]]);

   	 	  }
   	 }
   	 dp[i]=ans;
   }
   return dp[sum];
}

int main()
{
	memset(dp,-1,sizeof(dp));
	int n,sum;
	 cin>>n>>sum;
	 int arr[n];

	 for(int i=0;i<n;i++)
	 	cin>>arr[i];
	 sort(arr,arr+n);

     cout<<f_dp(n,sum,arr);


}

