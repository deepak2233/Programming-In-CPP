#include<iostream>
using namespace std;
#include<cstring>
int main()
{

    char s[1000];
    int d;
    cin.getline(s,1000);
    int len=strlen(s);
    for(int i=0;i<len;i++)
    {
        if(i!=len-1)
        d=s[i]-s[i+1];
        cout<<s[i];
        if(i!=len-1)
        cout<<(-1)*d;


    }
    s[len+1]='\0';
}
