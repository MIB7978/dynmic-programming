#include<bits/stdc++.h>
using namespace std;


const int m = 1e9+7;
int f(int n)
{
   int a =2;
   int res=1;
   while(n)
   {
      if(n&1)
      	res=((res%m)*(a%m))%m;
      a=(a%m)*(a%m);
      n=n>>1;

   }
   return res;
}

int main()
{
	int n;
	cin>>n;
	
	int oo,oe,ee;
	 oo=ee=oe=0;
	 int a,b;
	for(int i=0;i<n;i++)
	{
        cin>>a;
        cin>>b;
       if(a%2==0 && b%2==0)
       ee++;
       else if(a%2!=0 && b%2!=0)
       oo++;
       else 
       oe++;   
	}
	int ans;
	if(oe==0 && oo%2==0)
		ans =0 ;
	else if(oe==0 && oo%2!=0)
		ans = f(n);
	else
		ans = f(n-1);
	cout<<ans;

}   