#include<bits/stdc++.h>
using namespace std;

int arr[1000000];
int arr2[1000000];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		for(int i=1;i<=n;i++)
			cin>>arr[i];

		arr2[0]=-1;
		for(int i=1;i<=n;i++)
			arr2[i]=0;

		for(int i=1;i<=n;i++)
			arr2[arr[i]]++;

		int count=0;
		int num;
		for(int i=1;i<=n;i++)
		{
			if(arr2[i]>=i)
				count++;
			num=arr2[i];
			if(num>=i)
			{
				for(int j=i+1;j<=num;j++)
				{
					if(arr2[j]>=i)
					count+=2;
				}
		    }
		}
		cout<<count<<endl;
	}
	return 0;
}
