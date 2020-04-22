#include<bits/stdc++.h>
using namespace std;
#include<algorithm>

int main() {


		int n,sum=0;
		bool check=true;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		for(int i=0;i<n-1;i++)
		{
		    if(arr[i]+1!=arr[i+1])
                check= false;

        }
        if(check)
        {
            cout<<"Yes";
        }
        else
            cout<<"No";

	return 0;
}
