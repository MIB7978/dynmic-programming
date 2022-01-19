#include<bits/stdc++.h>
using namespace std;


int mem[1000];
int fib_rec(int n)
{
	 if(n==0 || n==1)
	 	return n;
	 return fib_rec(n-1)+fib_rec(n-2);

}

int fib_mem(int n)
{
	 if(n==0 || n==1)
	 	return n;
	 if(mem[n]!=-1)
	 	return mem[n];
	 return mem[n]= fib_mem(n-1)+fib_mem(n-2);
}


int fib_dp(int n)
{
	int dp[n+1]={0};
	dp[0]=0;
	dp[1]=1;
	for(int i=2;i<=n;i++)
		dp[i]=dp[i-1]+dp[i-2];

	return dp[n];
}

int main()
{
	memset(mem,-1,sizeof(mem));
	int n;
	cin>>n;
     cout<<fib_rec(n);
     cout<<endl<<fib_mem(n);
     cout<<endl<<fib_dp(n);
}