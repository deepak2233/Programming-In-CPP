#include<bits/stdc++.h>
#include<string>
using namespace std;
int main() {
	char s[10000];
	cin>>s;

	int len=strlen(s);
	for(int i=0;i<len;i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {

            cout<<"\n";
        }
      
        cout<<s[i];

    }
    s[len+1]='\0';


	return 0;
}
