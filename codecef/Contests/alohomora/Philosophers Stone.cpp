
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int count=0,n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    for(int i=0;i<n-1;i++)
	    {
	        if(a[i]==a[i+1])
	        count++;
	    }
	    if(count==0)
	    cout<<"no"<<endl;
	    else
	    cout<<"yes"<<endl;
	}
	return 0;
}
