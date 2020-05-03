#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
typedef long long int lli;
 
int main(){
    fastIO;
    lli n;
    cin>>n;
    int arr[n];
    for(lli i=0;i<n;i++){
        cin>>arr[i];
    }
    int flag;
    for(lli i=0;i<n-1;i++)
    {
        flag=1;
        for(lli j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                flag=0;
                break;
            }
        }
            if(flag==1)
            {
                cout<<arr[i]<<" ";
            }
    }
    //print last element
    cout<<arr[n-1]<<" ";
    return 0;
}
