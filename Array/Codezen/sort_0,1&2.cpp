#include<iostream>
using namespace std;
#include<climits>
#include<algorithm>


void sort012(int arr[], int n)  {
    int count1 = 0,count2=0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0)
        count1++;
    }

   for (int i = 0; i < n; i++) {
        if (arr[i] == 1)
            count2++;
    }

   for (int i = 0; i < count1; i++)
        arr[i] = 0;

    for (int i = count1; i <count1+count2; i++)
        arr[i] = 1;
             for (int i = count1+count2; i < n; i++)
        arr[i] = 2;
}



int main() {

	int size_first;

	cin>>size_first;
	int *arr_first=new int[1+size_first];

	for(int i=0;i<size_first;i++)
		cin>>arr_first[i];

	sort012(arr_first,size_first);

	for(int i=0;i<size_first;i++)
		cout<<arr_first[i]<<" ";
	return 0;
}

