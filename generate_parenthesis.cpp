#include<bits/stdc++.h>
using  namespace std;


vector<string> v;

bool f1(string s)
{
    stack<char> s1;
    for(auto i:s)
    {
      if(i=='(')
         s1.push('(');
      if(i==')')
         {
            if(s1.empty())
               return false;
            s1.pop();
         }

    }
    if(s1.empty()) return true;
    return false;
}

int f(int n , string s , int oc,int cc)
{
    if(oc == n && cc==n)
    {
        v.push_back(s);
        return 1;

    }
    if(oc>n)
      return 0;
   if(cc>oc)
      return 0;
   if(cc>n)
      return 0;
    string a = s+"(";
    string b = s+")";
    // cout<<a;
     return f(n,a,oc+1,cc)+f(n,b,oc,cc+1);
    

}


int main()
{
#ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
#endif
  

  int n;
  cin>>n;
  string s ="(";
  cout<<f(n,s,1,0);
   
   for(auto i:v)
      cout<<i<<endl;

}   