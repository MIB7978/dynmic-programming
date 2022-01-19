#include<bits/stdc++.h>
using namespace std;

int f(int n,int x,int y,int z)
{
	 int dp[n+1]={0};
	 for(int i=2;i<=n;i++)
	 {
	 	if(i%2==0)
	 		dp[i] = min(dp[i/2]+x,dp[i-1]+y);
	 	else 
	 		dp[i] = min(dp[i-1]+y,dp[(i+1)/2]+z+y);
	 	
	 }
	 return dp[n];
}

int main()
{
	int n,x,y,z;
	cin>>n>>x>>y>>z;
	cout<<f(n,x,y,z);

}