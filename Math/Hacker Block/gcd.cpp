#include<bits/stdc++.h>
using namespace std;
#include<algorithm>

/*int gcd(int a, int b)
{
	if(b==0)
	{
		return a;
	}
	return gcd(b,a%b);
}*/

int main() {
	int a, b;
	cin>>a>>b;
	cout<<__gcd(a,b)<<"\n"; // __gcd(a,b) inbuilt function
	return 0;
}
