#include <iostream>
using namespace std;

int main() {
    int T;
	int i,k,n;
	int a[n];
	cin>>T;
	while(T--)
	{
	    cin>>n;
	    cin>>k;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        if(k>=a[i])
	        {
	            k=k-a[i];
	            cout<<"1";
	        }
	        else
	        {
	            cout<<"0";
	        }
	    }
	    cout<<endl;
	 }
	return 0;
}