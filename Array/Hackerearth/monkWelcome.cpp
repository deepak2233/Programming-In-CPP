#include <iostream>
using namespace std;     
    int main()
    {
        long n,a[100000],b[100000],c[100000];
        int i;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
            c[i]=a[i]+b[i];
        }
            for(i=0;i<n;i++)
        {
            cout<<c[i]<<" ";
        }
        
        return 0;
    }
