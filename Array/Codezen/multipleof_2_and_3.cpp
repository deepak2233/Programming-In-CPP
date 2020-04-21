
#include<bits/stdc++.h>
using namespace std;

int FindSum(int *arr,int l)
{
    int sum=0;
 for(int i=0;i<l;i++)
 {
     if(arr[i]%2==0 || arr[i]%3==0){
         sum+=arr[i];
     }
 }
    return sum;
}
int main()
{
    int l;
    cin>>l;
    int arr[l];
    for(int i=0;i<l;i++)
    {
        cin>>arr[i];
    }
    cout<<FindSum(arr,l)<<"\n";
}
