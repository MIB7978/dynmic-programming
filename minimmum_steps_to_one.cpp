#include<bits/stdc++.h>
using namespace std;

int f(int n)
{
	 if(n==1)
	 	return  0;
	 int q1,q2,q3;
	 q1=q2=q3=INT_MAX;
	 if(n%2==0)
	 	q1 = 1+f(n/2);
	 if(n%3==0)
	 	q2 = 1+f(n/3);
	 q3 = 1+f(n-1);
	 return min(q1,min(q2,q3));
}

int f_dp(int n)
{
	int dp[n+1];
	fill(dp,dp+n+1,0);
	for(int i=2;i<=n;i++)
	{
		
		int q1,q2,q3;
		q1=q2=q3=INT_MAX;
		if(i%2==0)
			q1=1+dp[i/2];
		if(i%3==0)
			q2 = 1+dp[i/3];
		q3 = 1+dp[i-1];
		dp[i] = min(q1,min(q2,q3));
	}
	return dp[n];
}

int main() 
{
	 int n;
	 cin>>n;
     cout<<f(n);
     cout<<endl<<f_dp(n);
 }