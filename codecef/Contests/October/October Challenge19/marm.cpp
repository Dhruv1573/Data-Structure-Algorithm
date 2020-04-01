#include<bits/stdc++.h>
using namespace std;
int result_ans(int a[],int n,int k,bool f)
{

	for(int i=0;i<k;i++)
		{
			a[i%n]=a[i%n]^a[n-(i%n)-1];
		}
		for(int i=0;i<n;i++)
		{
			if(i==n/2 && f==true)
			{
				cout<<0<<" ";
			}
			else
			cout<<a[i]<<" ";
		}
		cout<<endl;

}
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		k=k%(3*n);
		bool f=true;
		if(k>n/2 && n%2==1)
			f=false;
		int max1=INT_MIN;
		for(int i=0;i<n;i++)
		{
			if(max1<a[i])
				max1=a[i];
		}
		result_ans(a,n,k,f);
		
	}
	return 0;

}