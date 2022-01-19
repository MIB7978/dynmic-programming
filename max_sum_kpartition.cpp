#include<bits/stdc++.h>
using namespace std;



void find_max(int &index_of_end,int &max1,int &max2,int j,int k,int arr[])
{
     
     for(int i=j*k;i<(j*k)+k;i++)
     {
     	if(max1<arr[i]){
     		max2=max1;
     		max1=arr[i];
     		index_of_end=i;
     	}
     	else if(max2 < arr[i])
     		max2 = arr[i];
     }
}
int main() 
{
	 int n,k;
	 cin>>n>>k;
	 int arr[n];
	 for(int i=0;i<n;i++)
	 	cin>>arr[i];
     int dp[n];
      int mx = INT_MIN;
     for(int i=0;i<k;i++)
     {
     	dp[i]=arr[i];
     	mx = max(mx,arr[i]);
     }
     int index_of_end=0,max1=INT_MIN,max2=INT_MIN;
    
    
     for(int i=1;i<ceil((float)n/k);i++)
     {
     	
     	int start = i*k;
     	find_max(index_of_end,max1,max2,i-1,k,dp);
     	// cout<<max1<<endl<<max2<<endl<<index_of_end;
     	
        for(;start<i*k+k && start<n;start++)
        {
       
            if((start-k)!=index_of_end)
            	dp[start]=arr[start]+max1;
            else 
            	dp[start]=arr[start]+max2;
            if(dp[start]>mx)
            	mx = dp[start];
        
       }

     }

    cout<<mx;
}