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
    
   
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, count = 0;
        cin>>a>>b;
        for(int i = a; i <= b; i++)
        {
            if(primeCheck(i))
            {
                count++;
            }
        }
        cout<<count<<"\n";

    }
    
 }
