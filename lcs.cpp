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




// int f(string a, string b,int x,int y)
// {
// 	if(x==0 || y==0)
// 		return 0;
// 	if(a[x-1]==b[y-1])
// 		return 1+f(a,b,x-1,y-1);
// 	return max(f(a,b,x,y-1),f(a,b,x-1,y));
// }

string f(string a, string b,int x,int y)
{
	int dp[x+1][y+1];
	for(int i=0;i<=x;i++)
		dp[0][i]=0;
	for(int i=0;i<=y;i++)
		dp[i][0]=0;
	for(int i=1;i<=x;i++)
		 for(int j=1;j<=y;j++)
		 {
		 	if(a[i-1]==b[j-1])
		 	dp[i][j] = dp[i-1][j-1]+1;
		    else 
		    	dp[i][j]= max(dp[i][j-1],dp[i-1][j]);
		 }

    string s;
    int i = x;
    int j = y;
    while(i>0 && j>0)
    {
    	if(a[i-1]==b[j-1])
    	{
    		s+=a[i-1];
    		i--;
    		j--;
    	}
    	else 
    	{
            if(dp[i][j-1]>dp[i-1][j])
            	j--;
            else
            	i--;
    	}

    }
    reverse(s.begin(),s.end());
    return s;
}

int main()
{
fast
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    string a , b;
    cin>>a>>b;
    cout<<f(a,b,a.length(),b.length());


}