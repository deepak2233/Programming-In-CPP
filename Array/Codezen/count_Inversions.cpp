#include<bits/stdc++.h>
using namespace std;
#include<algorithm>

int main() {


		int n,count=0;
        cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		
		for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(arr[i]>arr[j])
                {
                    count++;
                }
            }
        }
        cout<<count<<"\n";
}
 

