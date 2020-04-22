#include <iostream>
#include<algorithm>

using namespace std;
bool comp(string a,string b)
{
	string ab = a+b;
	string ba = b+a;
	return (ab>ba);
}
int main() {
	int t;
	cin>>t;
	while(t--){

		int n; cin >> n;
		string s[n];
		for (int i = 0; i < n; i++) {
			cin >> s[i];
		}
		sort (s, s + n,comp);
		for (int i = 0; i < n; i++) {
			cout << s[i];
		}
		cout << endl;
	}
	
	return 0;
}
