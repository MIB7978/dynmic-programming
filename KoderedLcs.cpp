
#include<bits/stdc++.h>
using namespace std;

int dp[100][100][100];
int f(string s,string t,int i, int j,int k)
{
	 if(i==0 || j==0|| k==0)
	 	return 0;

     
     if(dp[i][j][k]!=-1)
     	return dp[i][j][k];
	 if(s[i-1]==t[j-1])
	 	return 1+f(s,t,i-1,j-1,k);
     

     int a , b,c ;
     a= f(s,t,i-1,j,k);
     b = f(s,t,i,j-1,k);
     c = 1+f(s,t,i-1,j-1,k-1);
	 return dp[i][j][k]=max({a,b,c});



}


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    
    memset(dp,-1,sizeof(dp));
    string s;
    string t;
    int k;
    cin>>s>>t;
    cin.ignore();
    cin>>k;


 cout<<f(s,t,s.length(),t.length(),k);

}