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


int f(int n,int m)
{
	if(n==0)
		return 1;
	
	int a = 0;
	int b =0 ;
	if(n>0)
		a = f(n-1,m);
	if(n>=m)
		b = f(n-m,m);
	return a+b;
}

int main()
{
fast
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
   
   int n,m;
   cin>>n>>m;
   cout<<f(n,m);

}