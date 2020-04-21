#include<bits/stdc++.h>
using namespace std;

bool isPresent(int *arr, int n, int val)
{
    bool check=false;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==val)
        {
            check= true;
            return check;
            break;
        }
    }
    return check;
}

int main()
{
    int n,val;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>val;
    if(isPresent(arr, n, val))
    {
        cout<<"Yes"<<"\n";
    }
    else
        cout<<"No"<<"\n";
}
