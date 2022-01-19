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


int f(int w[],int val[],int W,int n)
{
	if(W==0)
		return 0;
	if(n==0)
		return 0;

	if(W >=w[n-1])
		return max(val[n-1]+f(w,val,W-w[n-1],n-1),f(w,val,W,n-1));
    return f(w,val,W,n-1);

}

int main()
{
fast
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
  int W,n;
  cin>>n>>W;
  int weight[n];
  int val[n];
  for(int i=0;i<n;i++)
  	cin>>weight[i];
  for(int i=0;i<n;i++)
  	cin>>val[i];
  cout<<f(weight,val,W,n);
}