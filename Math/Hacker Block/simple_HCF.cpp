#include <bits/stdc++.h>
using namespace std;
#include<algorithm>
#include<math.h>
#define i_64 long long
#define d_64 long double
#define u_64 unsigned long long
/*
int gcd(int a, int b)
{
	if(a==0)
		return b;
	return(b%a,a);
}

int findGCD(int *arr, int n)
{
	int ans = arr[0];
	for(int i=1;i<n;i++)
	{
		ans = gcd(arr[i],ans);
	}
	return ans;
}*/

int main()
{
#ifndef ONLINE_JUDGE 
 	freopen("input.text", "r", stdin); 
 	freopen("output.text", "w", stdout); 
#endif
 	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int ans = arr[0];
	for(int i=1;i<n;i++)
	{
		ans = __gcd(arr[i],ans);
	}
	cout<<ans<<"\n";

}


 



