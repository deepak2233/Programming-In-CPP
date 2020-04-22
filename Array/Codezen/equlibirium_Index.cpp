#include<bits/stdc++.h>
using namespace std;
#include<algorithm>

int euilibrium(int *arr,int n)
{
        int RightSum=0;
        int LeftSum=0;
        for(int i=0;i<n;i++)
        {
           RightSum+=arr[i];
        }
        for(int i=0;i<n;i++)
        {
           RightSum-=arr[i];
           if(LeftSum==RightSum)
           {
               return i;
           }
           LeftSum+=arr[i];
        }
        return -1;
}

int main() {
		int n;
        cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}

		cout<<euilibrium(arr,n);

}


