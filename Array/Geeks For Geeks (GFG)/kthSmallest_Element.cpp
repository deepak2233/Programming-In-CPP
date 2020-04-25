#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    cin>>k;
	    sort(arr,arr+n,greater<int>());
	    for(int i=n;i>=0;i--)
	    {
	        cout<<arr[n-k]<<"\n";
	        break;
	    }


	}
	return 0; 
}
