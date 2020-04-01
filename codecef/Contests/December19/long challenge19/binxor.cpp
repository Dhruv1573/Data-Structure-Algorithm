#include<bits/stdc++.h>
using namespace std;
vector<long>vect;
long mod=1e9+7;
void result(int a1,int b1,int n)
{
	long alfa;
	if((a1+b1)<=n)
	alfa=a1+b1;
	else
	alfa=n-(a1+b1);
	int final_result=0;
	for(int i=abs(a1-b1);i<=alfa;i++)
	{
		long p=vect[i];
		long q=vect[n-1];
		long r=vect[n];
		long s=(p*q)%mod;
		long t=pow(s,mod-2);
		long u=(e*t)%mod;
		final_result=(final_result+u)%mod;

	}
}
int main()
{
	vect[0]=1;
	vect[1]=1;
	vect[2]=2;
	for(int i=0;i<1000000;i++)
	{
		vect[i]=(i*vect[i-1])%mod;
	}

	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		strin s1,s2;
		cin>>s1>>s2;
		int a1=0,b1=0;
		for(int i=0;i<s1.length();i++)
		{
			if(s1[i]=='1')
			a1++;
		}
		for(int i=0;i<s1.length();i++)
		{
			if(s2[i]=='1')
			b1++;
		}
		result(a1,b1,n);

	}
}