#include<bits/stdc++.h>
#include<string>
using namespace std;
int main() {
	char s[10000];
	cin.getline(s,10000);
	int len=strlen(s);
    int count=1;
	for(int i=0;i<len;i++)
	{

	    if(s[i]==s[i+1])
        {
          s[i]=s[i+1];
          count++;

        }
        else{
            cout<<s[i]<<count;
            count=1;
        }

	}
	s[len+1]='\0';

	return 0;
}
