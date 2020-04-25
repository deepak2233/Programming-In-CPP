#include<iostream>
using namespace std;
#include<climits>

void PushZeroesEnd(int arr[], int n){

    int i,count=0;
    for(i=0;i<n;i++)
    if(arr[i]!=0)
    {
        arr[count++]=arr[i];
    }

    while(count<n)
    {
    arr[count++]=0;
    }
}
int main() {

	int size;

	cin>>size;
	int *input=new int[1+size];

	for(int i=0;i<size;i++)
		cin>>input[i];

	PushZeroesEnd(input,size);
	for(int i=0;i<size;i++)
		cout<<input[i]<<" ";

	return 0;

}



