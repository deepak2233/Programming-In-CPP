#include<iostream>
using namespace std;
#include<algorithm>
int main()
{
        int N,l,r,S;
        cin>>N;
        int arr[N];
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+N);
        cin>>S;
        for(int i=0;i<N-2;i++)
        {
            l=i+1;
            r=N-1;
            while(l<r)
            {
                if((arr[i]+arr[l]+arr[r]==S))
                {
                    cout<<arr[i]<<", "<<arr[l]<<" "<<"and"<<" "<<arr[r]<<endl;
                    r--;
                    l++;
                }
                else if((arr[i]+arr[l]+arr[r])>S)
                {
                    r--;
                }
                else if((arr[i]+arr[l]+arr[r]<S))
                {
                    l++; 
                }
            }
        }
}
