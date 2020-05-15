#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
 
bool cmp(pair<int,int> a,pair<int,int> b)
{
  if(a.ss==b.ss)
  return a.ff<b.ff;
  return a.ss<b.ss;
}
int main()
{ 
    int t;
    cin>>t;
 
    while(t--)
    {
      int n;
      cin>>n;
 
      vector< pair<int,int> >v(n);
      for(int i=0;i<n;i++){
      cin>>v[i].ff>>v[i].ss;
      }
 
      sort(v.begin(),v.end(),cmp);
      int count=1;
      int curr=v[0].ss;
      for(int i=1;i<n;i++)
      {
        if(v[i].ff>=curr)
        {
          ++count;
          curr=v[i].ss;
        }
 
      }
      cout<<count<<endl;
 
    } 
 
}
