#include<bits/stdc++.h>
using namespace std;


int main() {


		int n,sum=0;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(int i=0;i<n;i++)
		{
			sum+=arr[i];
            if(sum >= 10)
            {
                int tempSum = sum % 10;
                sum = sum / 10;
                tempSum += sum;
                sum = tempSum;
            }
        }
        cout<<sum<<"\n";

	return 0;
}
