#include<bits/stdc++.h>
#define INF 100000000ll
#define ll long long	
using namespace std;

ll n,m,a[10001],b[10001],dp[5001][5001];

ll f(int i,int j)
{
	if(i==n)
		return 0;
	if(j==m)
		return INF;

	if(dp[i][j]!=-1)
		return dp[i][j];

	int op1 = abs(a[i]-b[j])+f(i+1,j+1);
	int op2 = f(i,j+1);

	return dp[i][j] = min(op1,op2);

	

}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif
	
	memset(dp,-1,sizeof(dp));
	 cin>>n>>m;
     for(int i=0;i<n;i++)
     	cin>>a[i];
     for(int i=0;i<m;i++)
     	cin>>b[i];
	 sort(a,a+n);
	 sort(b,b+m);
     
     cout<<f(0,0);

}