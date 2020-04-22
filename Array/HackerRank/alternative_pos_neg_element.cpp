#include<bits/stdc++.h>
using namespace std;
#include<algorithm>

int main() {


		int n,sum=0;
        cin>>n;
		int arr[n];
		int arr2[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int l=0,r=0,i=0;

		while(l<n && r<n)
		{
           if(arr[l]<0)
           {
               l++;
           }
           else{
                if(arr[r]>0)
                {
                    r++;
                }
                else{
                    arr2[i]=arr[l];
                    l++;
                    i++;
                    arr2[i]=arr[r];
                    i++;
                    r++;
                }
           }
		}
           for(i=0;i<n;i++)
           {

               arr[i]=arr2[i];
               cout<<arr[i]<<" ";
           }


        }


