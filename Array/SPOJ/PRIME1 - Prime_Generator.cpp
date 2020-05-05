
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
    {
	ll a, b, i, j;

    cin>>a>>b;

	if (a == 1) {
		a++;
		if (b >= 2) {
			cout << a << " ";
			a++;
		}
	}
	if (a == 2)
		cout << a << " ";


	if (a % 2 == 0)
		a++;


	for (i = a; i <= b; i = i + 2) {

		bool flag = 1;


		for (j = 2; j * j <= i; ++j) {
			if (i % j == 0) {
				flag = 0;
				break;
			}
		}


		if (flag == 1)
			cout << i << " ";
	}


    }
}
