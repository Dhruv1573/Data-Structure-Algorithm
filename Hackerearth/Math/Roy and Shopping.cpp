#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
    cin>>t;
    int n;
    for(int i=0;i<t;i++)
    {
        cin>>n;

	while (n%2 == 0)
	{
        int z=2;
        cout<<n-2;
		n = n/2;
	}

	// n must be odd at this point. So we can skip one element (Note i = i +2)
	vector<int>vect;
	for (int i = 3; i <= sqrt(n); i = i+2)
	{
		// While i divides n, print i and divide n
		while (n%i == 0)
		{
			vect.push_back(i);
			n = n/i;
		}
	}
	int min=INT_MIN;
	for(int i=0;i<vect.size();i++)
    {
        if(min<vect[i])
            min=vect[i];
    }
    //cout<<min;
    cout<<n-min;


	// This condition is to handle the case when n is a prime number greater than 2
	if (n > 2)
		cout<<0<<endl;
}
}
