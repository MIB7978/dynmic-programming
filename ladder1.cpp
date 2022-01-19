#include<bits/stdc++.h>
#define ll long long int
#define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define fast ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forl(i,a,n) for( i=a;i<n;i++)
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
    
  int n ;
  cin>>n;
  int k;
  cin>>k;
  int arr[n];
  int dp[n];
  for(int i=0;i<n;i++)
  	cin>>arr[i];
  dp[0]=1;
  for(int i=1;i<n;i++)
  {
  	dp[i]=0;

  	if(arr[i])
  		continue;
  	for(int j = i-1;j>=max(0,i-k);j--)
  		dp[i]+=dp[j];
  }
  cout<<dp[n-1];

}