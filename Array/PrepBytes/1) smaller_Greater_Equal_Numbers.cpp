#include<bits/stdc++.h>
using namespace std;

int main() 
{
#ifndef ONLINE_JUDGE 
 	freopen("input.text", "r", stdin); 
 	freopen("output.text", "w", stdout); 
#endif
    int T;
    cin >> T;
    while(T--)
    {
    	int n,K,count_L=0,count_E=0,count_M=0;
    	cin>>n>>K;
    	int arr[n];
    	for(int i=0;i<n;i++)
    	{
    		cin>>arr[i];
    	}
    	for(int i=0;i<n;i++)
    	{
    		if(arr[i]<K)
    		{
    			count_L++;
    		}
    		if(arr[i]>K)
    		{
    			count_M++;
    		}
    		if(arr[i]==K)
    		{
    			count_E++;
    		}
    	}
    	cout<<count_L<<" "<<count_M<<" "<<count_E<<"\n";
    }
}
    
  
