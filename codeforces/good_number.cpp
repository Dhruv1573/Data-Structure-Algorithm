#include <bits/stdc++.h>
using namespace std;

bool func(string n,long long k)
{

	vector<bool> dp(k+1,0);
	long long len = n.length();

	for(long long i=0;i<len;i++)
        {

		if(n[i] >= '0' && n[i] <= char(k + '0'))
		{


			dp[n[i]-'0'] = 1;
		}
	}
	for(int i=0;i<=k;i++)
        {

		if(dp[i] == 0)
            {

			return false;
		}
	}
	return true;
}

int main()
{

	long long n;


		cin >> n;

		long long k;
		cin >> k;

		long long ans = 0;
		while(n--)
            {

			string s;
			cin >> s;

			if(func(s,k))
                {

				ans++;
			}
		}
		cout << ans << endl;

}
