#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
	ll n,rem,res=0;
	cin>>n;
	while(n!=0)
	{
		rem = n % 10;
		res = res * 10 +rem;
		n = n/10;
	}
	cout<<res<<"\n";

	return 0;
}
