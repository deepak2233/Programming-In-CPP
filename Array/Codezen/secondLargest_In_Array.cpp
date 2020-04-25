#include<iostream>
using namespace std;
#include<climits>
#include<algorithm>
int FindSecondLargest(int arr[], int n)
{
    int i,lar=INT_MIN,slar=INT_MIN;
        for(i=0;i<n;i++)
        {
            if(arr[i]>lar)
            {
                slar=lar;
                lar=arr[i];
            }
            else if(arr[i]>slar && arr[i]!=lar)
            {
                slar=arr[i];

            }
        }

    if(slar==INT_MIN)
    {
        return INT_MIN;
    }
    else
       return  slar;
}

int main() {

	int size;
	cin>>size;
	int *input=new int[1+size];

	for(int i=0;i<size;i++)
		cin>>input[i];

	cout<<FindSecondLargest(input,size);

	return 0;

}



