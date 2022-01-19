#include<bits/stdc++.h>
using namespace std;


int cnt =0 ;
// int f(int n ,int k)
// {
	
// 	 if(n==0)
// 	 	return 1;
// 	 if(dp[n]!=-1)
// 	 	return dp[n];
// 	 int sum =0 ;
// 	 for(int i =1 ;i<=k;i++)
// 	 	if(n-i>=0)
//         sum+=f(n-i,k);
//     return dp[n]=sum;
// }
int f_dp(int n,int k)
{
	int dp[n+1];
	dp[n+1]={0};
	dp[0]=1;
	for(int i=1;i<=n;i++)
	{
		int sum=0;
		for(int j = 1 ;j<=k;++j )
		{
             if(i-j>=0)
             sum+=dp[i-j];            
		}
		dp[i]=sum;

	}
	return dp[n];
}
int main()
{
	// memset(dp,-1,sizeof(dp));
	 int n,k;
	 cin>>n>>k;
	 cout<<f_dp(n,k);
	
}