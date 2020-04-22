#include<bits/stdc++.h>
using namespace std;
#include<algorithm>

int main() {


		int n,res=0;
        cin>>n;
		int arr[n];
		int arr2[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(int i=0;i<n;i++)
		{
			res^=arr[i];
		}
		for(int i=0;i<=n-2
		;i++)
		{
			res^=i;
		}
		cout<<res<<"\n";


}
