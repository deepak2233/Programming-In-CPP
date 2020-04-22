#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1;
    cin>>n1;
    int arr1[n1];
    int size_arr1=sizeof(arr1)/sizeof(int);
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    int n2;
    cin>>n2;
    int arr2[n2];
    int size_arr2=sizeof(arr2)/sizeof(int);
    for(int j=0;j<n2;j++)
    {
        cin>>arr2[j];
    }

    int sum[n1>n2?n1:n2];
    int size_sum=sizeof(sum)/sizeof(int);
    int c=0;
    int i=size_arr1-1;
    int j=size_arr2-1;
    int k=size_sum-1;
    while(k>=0)
    {
        int d=c;
        if(i>=0)
        {
            d+=arr1[i];
        }
        if(j>=0)
        {
            d+=arr2[j];
        }

        c=d/10;
        d=d%10;
        sum[k]=d;
        i--;
        j--;
        k--;

    }
    if(c!=0)
    {
        cout<<c<<", ";
    }
    for(int val: sum)
    {
        cout<<val<<", ";
    }
	cout<<"END";
}
