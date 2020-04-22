#include<bits/stdc++.h>
using namespace std;
int main() {
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}

		for(int i=0;i<n;i++)
     {
          int div;
          div=arr[i]/4;
          if(div<=0)
          {
           div=-1;
          }
       arr[i]=div;
       cout<<arr[i]<<" ";
      }
	return 0;
}
