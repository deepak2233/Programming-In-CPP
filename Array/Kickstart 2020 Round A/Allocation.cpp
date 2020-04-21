#include<iostream>
using namespace std;
#include<algorithm>
int main()
{
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        int N,B,sum=0,count=0;
        cin>>N>>B;
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }
        sort(A,A+N);
         for(int i=0;i<N;i++)
        {
            sum+=arr[i];
            if(sum<=B)             // Successfully Buy 
            {
                count++;
            }
            else
                break;
        }
        cout<<"Case #"<<i<<": "<<count<<endl;
    }
}


