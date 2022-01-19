#include<bits/stdc++.h>
#define ll long long int
#define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define fast ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forl(i,a,n) for(int i=a;i<n;i++)
#define ld long double
#define cout(a,n) for(int h=0;h<n;h++)cout<<a[h]<<" ";
#define mod 1000000009
#define nl cout<<"\n";
#define de cout<<"here";
using namespace std;
int main()
{
fast
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
     int n;
     cin>>n;
     int arr[n];
     cin(arr,n);
     int dp[n];
     dp[0]=arr[0];
     dp[1]=arr[1];
     dp[2]=arr[2];
     for(int i=3;i<n;i++)
        dp[i] = arr[i]+min({dp[i-1],dp[i-2],dp[i-3]});
     cout<<min({dp[n-1],dp[n-2],dp[n-3]});
     
}