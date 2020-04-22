#include<iostream>
using namespace std;
#define ll long long
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        ll X,Y,K,N,i,req,flage=0,P,C;
        cin>>X>>Y>>K>>N;
        req=X-Y;
        int page[N],cost[N];
        for(i=0;i<N;i++)
        {
            cin>>P>>C;
            page[i]=P;
            cost[i]=C;
        }
        for(i=0;i<N;i++)
        {
            if(page[i]>=req)
            {
                if(cost[i]<=K)
                {
                    flage=1;
                }
            }
        }
        if(flage==1)
        {
            cout<<"LuckyChef"<<endl;

        }
        else
            cout<<"UnluckyChef"<<endl;

    }
}
