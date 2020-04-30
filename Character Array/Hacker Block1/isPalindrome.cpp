#include<iostream>
using namespace std;
#include<cstring>

int main()
{

    int n,count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
     for(int i=0;i<n/2;i++)
    {
       if(arr[i]!=arr[n-1-i])
       {
           count++;
       }

    }
    if(count)
    {

        cout<<"false";
    }
    else
        cout<<"true";
}
