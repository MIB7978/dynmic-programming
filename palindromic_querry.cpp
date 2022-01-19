#include<bits/stdc++.h>
using namespace std;


void f(vector<vector<int>>& dp ,string s ,int l,int r )
{
    int n  = s.length();
     for(int i=0;i<n;i++)
     dp[i][i]=1;
     for(int i=1;i<n;i++)
     {
         if(s[i]==s[i-1])
         dp[i-1][i] = 1;
         else
         dp[i-1][i]=0;
     }
     
     for(int j=2;j<n;j++){
         int k =j;
         
         for(int i=0;i<n&&j<n;j++,i++)
         {
             dp[i][j] = dp[i+1][j-1] && s[i]==s[j];
         }
         j=k;
     }
}

int main()
{
    string s;
    // getline(cin,s);
    cin>>s;
    int n =s.length();
    vector<vector<int>> dp(n,vector<int>(n));
    f(dp,s,0,n);
    cout<<dp[0][2];
    
    

}

