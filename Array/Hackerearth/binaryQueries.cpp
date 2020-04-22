#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while(q--)
    {
        int a;
        cin>>a;
        if(a==1)
        {
            int X;
            cin>>X;
            if(arr[X-1]==0)
            {
                arr[X-1]=1;

            }
            else if(arr[X-1]==1)
            {
                arr[X-1]=0;
            }
        }
        else
        {
            if(a==0)
            {
                int L,R;
                cin>>L>>R;
            if(arr[R-1]==0)
            {
                cout<<"EVEN"<<"\n";
            }
            else
                cout<<"ODD"<<"\n";
            }
        }
    
        
    }
}
