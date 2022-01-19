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
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   	cin>>arr[i];
   int rmax[n];
   int lmax[n];
   lmax[0]=arr[0];
   rmax[n-1]=arr[n-1];
   for(int i=1;i<n;i++)
   	lmax[i] = max(lmax[i-1],arr[i]);
   for(int i=n-2;i>=0;i--)
   	rmax[i] = max(rmax[i+1],arr[i]);
    int ans = 0 ;
   	for(int i=0;i<n;i++)
    ans  += (min(lmax[i],rmax[i]) - arr[i]);
    cout<<ans<<" ";

}