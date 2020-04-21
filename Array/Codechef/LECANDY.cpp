
#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int tot_Elephant,tot_Candies,count=0;
        cin>>tot_Elephant>>tot_Candies;
        int arr[tot_Elephant];
        for(int i=0;i<tot_Elephant;i++)
        {
            cin>>arr[i];
            count+=arr[i];
        }
        if(tot_Candies>=count)
            cout<<"Yes"<<endl;   
        else
            cout<<"No"<<endl;
    }
}
