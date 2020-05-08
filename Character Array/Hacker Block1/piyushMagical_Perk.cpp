#include<iostream>
using namespace std;
int main() {
	int N,M,K,S;
	cin>>N>>M>>K>>S;
	char arr[100][100];

	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			cin>>arr[i][j];
		}
	}

	bool check=true;

	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			char ch=arr[i][j];
			if(S<K)
			{
				check=false;
				break;
			}

			if(ch=='*')
			{
				S+=5;
			}
			else if(ch=='.')
			{
				S-=2;
			}
			else
			{
				break;
			}
			if(j!=N-1)
			{
				S--;
			}
		}
	}

	if(check)
	{
		cout<<"Yes"<<"\n"<<S<<"\n";
	}
	else
	cout<<"No"<<"\n";



	return 0;
}
