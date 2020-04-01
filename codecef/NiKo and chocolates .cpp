
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x=0,n,i,j;
	    cin>>n;
	    int A[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>A[i];
	    }
	    sort(A,A+n);
	    for(i=0;i<n-1;i++)
	    {
	        if(A[i]==A[i+1])
	        x++;
	    }
	    if(x==0)
	    cout<<"no"<<endl;
	    else
	    cout<<"yes"<<endl;
	}
	return 0;
}
