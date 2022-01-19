#include<bits/stdc++.h>
using  namespace std;

int main()
{
#ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
#endif

   string s,t ;
   cin>>s;
   cin>>t;

   int x = s.length();
   int y = t.length();
   bool dp[x+1][y+1];
   dp[0][0] = 1;
   for(int i=1;i<=x;i++)
   {
   	  if(s[i-1]=='*')
   	  	dp[i][0]=dp[i-2][0];
   	  else 
   	  	dp[i][0] = 0;
   }

   for(int i=1;i<=y;i++)
   	dp[0][i] = 0;

   dp[0][0] = 1;


   for(int i=1;i<=x;i++)
   {
   	for(int j=1;j<=y;j++)
   	{
   		 if(s[i-1]==t[j-1] || s[i-1]=='.')
   		 	dp[i][j] = dp[i-1][j-1];
   		 else if(s[i-1]=='*')
   		 {
   		 	if(dp[i-2][j]==1)
   		 		dp[i][j]=1;
   		 	else if((s[i-2]==t[j-1] || s[i-2]=='.') && dp[i][j-1]==1)
   		 		dp[i][j]=1;
   		 	else 
   		 		dp[i][j]=0;

   		 }
   		 else 
   		 	dp[i][j] = 0;
   	}
   } 

   for(int i=0;i<=x;i++){
   	for(int j=0;j<=y;j++)
   	{
        cout<<dp[i][j]<<" ";
   	}
   	cout<<endl;
   }
   cout<<dp[x][y];
}