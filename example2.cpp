
#include <bits/stdc++.h>
using namespace std;


void spiralFill(int m, int n, int a[][n])
{

	int val = 1;

	/* k - starting row index
		m - ending row index
		l - starting column index
		n - ending column index */
	int k = 0, l = 0;
	while (k < m && l < n)
	{
		/* Print the first row from the remaining
		rows */
		for (int i = l; i < n; ++i)
			a[k][i] = val++;

		k++;

		for (int i = k; i < m; ++i)
			a[i][n-1] = val++;
		n--;

		if (k < m)
		{
			for (int i = n-1; i >= l; --i)
				a[m-1][i] = val++;
			m--;
		}
		if (l < n)
		{
			for (int i = m-1; i >= k; --i)
				a[i][l] = val++;
			l++;
		}
	}
}


int main()
{
	int n;
	cin>>n;
	int a[n][n];
	spiralFill(n, n, a);
	for (int i=0; i<n; i++)
	{
	for (int j=0; j<n; j++)
		cout << a[i][j] << " ";
	cout << endl;
	}
	return 0;
}
