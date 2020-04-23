#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,min_Step,*m;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        m=min_element(arr,arr+n);
        if(k<(*m))
        {
            min_Step=0;
        }
        else{
        min_Step=k-(*m);
        }
        cout<<min_Step<<"\n";
        
    }
}
