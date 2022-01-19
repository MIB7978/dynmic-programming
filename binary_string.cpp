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
   int a[n+1],b[n+1];
   a[0]=b[0]=0;
   a[1]=b[1]=1;
   for(int i=2;i<=n;i++)
   {
   	 a[i]=a[i-1]+b[i-1];
   	 b[i]=a[i-1];
   }
   cout<<a[n]<<" "<<b[n]<<" ";
   cout<<(a[n]+b[n]);

}