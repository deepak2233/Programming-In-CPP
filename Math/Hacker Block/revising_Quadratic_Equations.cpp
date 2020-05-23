#include <bits/stdc++.h>
using namespace std;
#include<algorithm>
#include<math.h>
#define i_64 long long
#define d_64 long double
#define u_64 unsigned long long

bool primeCheck(int n) {
    if (n == 2 || n == 3 || n == 5) return true;
    if (n == 1 || n % 2 == 0 || n % 3 == 0) return false; 
  
    for (int i = 5; i * i <= n; i += 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
           return false; 
    return true; 
}

int main()
{
#ifndef ONLINE_JUDGE 
 	freopen("input.text", "r", stdin); 
 	freopen("output.text", "w", stdout); 
#endif
    int a, b, c, x1, x2;
    cin>> a >> b >> c;

    x1 = (-b + sqrt( pow(b,2) - 4*a*c )) / 2*a;
    x2 = (-b - sqrt( pow(b,2) - 4*a*c )) / 2*a;

    if(x1 > 0 && x2 > 0 && x1!=x2)
    {
    	cout<<"Real and Distinct"<<"\n";
    	if(x1<x2)
    	{
    		cout<<x1<<" "<<x2<<"\n";
    	}
    	else
    		cout<<x2<<" "<<x1<<"\n";
    }
    else if(x1 > 0 && x2 > 0 && x1 == x2)
    {
    	cout<<"Real and Equal"<<"\n";
    	cout<<x1<<" "<<x2;
    }
    else
    	cout<<"Imaginary"<<"\n";

 }



