#include<iostream>
#include<algorithm>
using namespace std;
#include <queue>
#define ll long long
#include<vector>


int main()
{
    ios_base::sync_with_stdio(true);
        cin.tie(NULL);
        cout.tie(NULL);
        int N,i=0,input1;

        cin>>N;
         vector<ll> v1;
          
        for(ll i=0;i<N;i++)
        {
            cin>>input1;
            v1.push_back(input1);
        }
        sort(v1.begin(),v1.end());
        for(ll i=0;i<N;i++)
        {
            cout<<v1[i]<<" ";
        }
        
}


