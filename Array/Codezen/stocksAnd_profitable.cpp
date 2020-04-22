#include<bits/stdc++.h>
using namespace std;
#include<algorithm>

int main() {


		int n,maxProfit=0;
        cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int min=arr[0];
		for(int i=0;i<n;i++)
        {
            if(arr[i]<min)
            {
                min=arr[i];
            }
            if((arr[i]-min)>maxProfit)
            {
                maxProfit=arr[i]-min;
            }
        }
        cout<<maxProfit;
}


