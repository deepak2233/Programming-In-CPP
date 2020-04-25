#include<iostream>
using namespace std;

int FindUnique(int * arr, int size)
{
    int unique;
    for(int i = 0; i < size; ++i)
    {
        int j = 0;
        for(; j < size; ++j)
        {
            if(i == j)
            {
                continue;
            }
            else if(arr[i] == arr[j])
            {
                break;
            }
        }
        if(j == size)
        {
            unique = arr[i];
            break;
        }
    }
    return unique;
}

int main() {

	int size;

	cin>>size;
	int *input=new int[1+size];

	for(int i=0;i<size;i++)
		cin>>input[i];

	cout<<FindUnique(input,size)<<endl;

	return 0;
}



// Alternative Solution

/*int FindUnique(int * arr, int size){
   
    int i;
 
    int res=arr[0];
    for(i=1;i<size;i++)
    {
        res=res^arr[i];

    }
    return res;
}*/
