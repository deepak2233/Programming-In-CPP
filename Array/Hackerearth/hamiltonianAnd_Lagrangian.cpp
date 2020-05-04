#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{

    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool check;
    for(ll i=0;i<n-1;i++)
    {
        check=1;
        for(ll j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                check=0;
                break;
            }
        }

        if(check)
        {
            cout<<arr[i]<<" ";
        }
        
    }
    cout<<arr[n-1]<<"\n";
}
