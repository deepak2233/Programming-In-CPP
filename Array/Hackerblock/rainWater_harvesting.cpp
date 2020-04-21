#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,max_L=0,max_R=0,res=0;
    cin>>n;
    int arr[n];
    int arr_L[n];
    int arr_R[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
     for(int i=0;i<n;i++)
    {
        max_L=max(max_L,arr[i]);
        arr_L[i]=max_L;

    }

     for(int i=n-1;i>=0;i--)
    {
        max_R=max(max_R,arr[i]);
        arr_R[i]=max_R;
    }

    for(int i=0;i<n;i++)
    {
        res+=(min(arr_R[i],arr_L[i])-arr[i]);

    }

cout<<res<<endl;


}
