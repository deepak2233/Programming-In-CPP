#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    bool check=0;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int ser;
    cin>>ser;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==ser)
            {
                check=1;
                break;
            }
        }
    }
    if(check)
    {
        cout<<check;
    }
    else
        cout<<check;
}
