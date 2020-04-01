#include<bits/stdc++.h>
using namespace std;
int main()
{
	int p,n=100001,i;
	bool prime[100001];
	memset(prime,true,sizeof(prime));
	for(p=2;p*p<=n;p++)
		if(prime[p]==true)
			for(i=p*2;i<=n;i+=p)
				prime[i]=false;
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,number,alice_count=0,bob_count=0;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>number;
			if(prime[number])
                continue;
	        if(number%2!=0)
				alice_count++;
	        else
	        	bob_count++;
	    }
	    if(alice_count==bob_count)
			cout<<"Alice"<<endl;
	    else if(bob_count>alice_count)
	        cout<<"Bob"<<endl;
	    else
	        cout<<"Alice"<<endl;

	}
	return 0;
}
