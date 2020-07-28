#include <iostream>
using namespace std;

int main() {
	int t; 
	cin>>t;
	while(t--)
	{
	    int n; 
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++) cin>>a[i];
	    bool check=true;
	    int p=1;
	    for(int i=0,j=n-1;i<=n/2;i++,j--)
	    {
	        if(a[i]==p && a[j]==p) 
	        continue;
	        else if(a[i]==p+1 && a[j]==p+1)
	        {
	            p=p+1;
	        }
	        else check=false;
	        if(p>7) check=false;
	    }
	    if(p!=7) cout<<"no"<<endl;
	    else check?(cout<<"yes"<<"\n"):(cout<<"no"<<"\n");
	}
	return 0;
}
 
