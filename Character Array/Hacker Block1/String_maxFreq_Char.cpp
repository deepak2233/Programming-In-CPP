#include<bits/stdc++.h>
#include<string>
using namespace std;
int main() {
	char s[1000];
	cin.getline(s,1000);
	int freq[256]={0},max=0,res;
	int len=strlen(s);

	for(int i=0;i<len;i++)
	{
		freq[s[i]]++;
		if(max<freq[s[i]])
        {
            max=freq[s[i]];
            res=s[i];
        }
	}
	cout<<(char)res<<"\n";

	return 0;
}
