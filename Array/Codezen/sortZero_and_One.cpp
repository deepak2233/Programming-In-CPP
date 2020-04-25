#include<iostream>
using namespace std;
#include<climits>

void SortZeroesAndOne(int arr[], int n){
    int count=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            count++;
        }
    }
    for(int i=0;i<count;i++)
    {
        arr[i]=0;
    }
    for(int i=count;i<n;i++)
    {
        arr[i]=1;
    }
}

int main() {

	int size;

	cin>>size;
	int *input=new int[1+size];

	for(int i=0;i<size;i++)
		cin>>input[i];

	SortZeroesAndOne(input,size);

	for(int i=0;i<size;i++)
		cout<<input[i]<<" ";
	return 0;
}



// Alternative Solution
    /*int l=0,r=n-1;
    while(l<r)
    {
        while(arr[l]==0 && l<r)
            l++;

      while(arr[r]==1 && l<r)

            r--;

    if(l<r)
    {
        arr[l]=0;
        arr[r]=1;
        l++;
        r--;
    }

    }*/


