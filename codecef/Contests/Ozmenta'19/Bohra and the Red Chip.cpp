
#include <bits/stdc++.h>
using namespace std;

void factorize(long long n)
{
	int count = 0;

	// count the number of times 2 divides
	while (!(n % 2)) {
		n >>= 1; // equivalent to n=n/2;
		count++;
	}


	// check for all the possible numbers that can
	// divide it
	for (long long i = 3; i <= sqrt(n); i += 2) {
		count = 0;
		while (n % i == 0) {
			count++;
			n = n / i;
		}


	}

	// if n at the end is a prime number.
	cout<<count;
	if(count>3&&count%2!=0)
            cout<<"YES"<<endl;
                else
            cout<<"NO"<<endl;

}

// driver program to test the above function
int main()
{
 long long t,n;
    cin>>t;
    for(long long i=0;i<t;i++)
    {
        cin>>n;
	//long long n = 1000000000000000000;

	factorize(n);
	}
	return 0;
}



