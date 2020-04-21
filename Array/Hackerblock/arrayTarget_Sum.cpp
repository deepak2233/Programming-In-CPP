#include<iostream>
using namespace std;
#include<algorithm>
int main()
{
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>k;
    sort(arr,arr+n);
    int i=0;
    int j=n-1;
    while(i<j)
    {

       if(arr[i]+arr[j]==k)
       {
           cout<<arr[i]<<" "<<"and"<<" "<<arr[j]<<endl;
           i++;
           j--;
       }
       else if(arr[i]+arr[j]>k)
        j--;
       else if(arr[i]+arr[j]<k)
        i++;


    }
}
