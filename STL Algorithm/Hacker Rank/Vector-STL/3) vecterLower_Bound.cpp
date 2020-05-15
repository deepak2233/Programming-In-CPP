#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
int main()
{
    int N,input,Q,n;
    cin>>N;
    vector<int> v;
    vector<int>::iterator low,up;
    for(int i=0;i<N;i++)
    {
        cin>>input;
        v.push_back(input);
    }
    cin>>Q;
    while(Q--)
    {
        cin>>n;
        if(binary_search(v.begin(),v.end(),n)){
        low=lower_bound(v.begin(),v.end(),n);
        cout<<"Yes"<<" "<<low-v.begin()+1<<endl;
        }
        else{
            up=upper_bound(v.begin(),v.end(),n);
            cout<<"No"<<" "<<up-v.begin()+1<<endl;
        }
    }




}
