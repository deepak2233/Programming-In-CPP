#include<iostream>
using namespace std;
#include<vector>
int main()
{
    ios_base::sync_with_stdio();
    cin.tie(NULL);
    int N,input;
    cin>>N;
    vector<int> v;
    for(int i=0;i<N;i++)
    {
        cin>>input;
        v.push_back(input);
    }
    int a;
    cin>>a;
    v.erase(v.begin()+a-1);
    int b,c;
    cin>>b>>c;
    v.erase(v.begin()+(b-1),v.begin()+(c-1));
    int size=v.size();
    cout<<size<<endl;
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }


}
