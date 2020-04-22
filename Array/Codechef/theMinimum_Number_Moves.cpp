#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio();
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,s=0,min=INT_MAX;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            s=s+a[i];
            if(a[i]<=min){
            min=a[i];

            }
        }
        cout<<(s-n*min)<<"\n";
    }
    return 0;
}
