#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, sum = 0;
	
	while(sum>=0)
	{
		cin>>n;		
		sum+=n;
		if(sum<0)
		{
			 break;			 
		}
		cout<<n<<"\n";
	}
}
