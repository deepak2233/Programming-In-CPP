#include<bits/stdc++.h>
using namespace std;

int bitMax_Len(int arr[], int n)
{
    if(n==0 || n==1){
        return n;
	}
    int inc[n],dec[n];
    int i,max;
    inc[0]=1;
    dec[n-1]=1;
    for(int i=1;i<n;i++)
    {
        inc[i]= arr[i]>=arr[i-1]?inc[i-1]+1:1;
    }
     for(int i=n-2;i>=0;i--)
    {
        dec[i]= arr[i]>=arr[i+1]?dec[i+1]+1:1;
    }
    max=inc[0]+dec[0]-1;
    for(int i=1;i<n;i++)
    {
        if(inc[i]+dec[i]-1>max)
        {
            max=inc[i]+dec[i]-1;
        }
    }


    return max;

}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {

            cin>>arr[i];
        }
        cout<<bitMax_Len(arr,n)<<"\n";
    }
}
