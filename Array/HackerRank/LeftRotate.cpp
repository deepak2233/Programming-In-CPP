#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r;
    cin>>n>>r;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    rotate(arr,arr+r,arr+n);  // inbuilt function
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
