#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"No. of Edges:---->";
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			a[i][j]=0;
		}
	}
	//Enter edges in u and v form
	int u,v;
	
	for(int i=0;i<n;i++)
	{
		cin>>u>>v;
		a[u-1][v-1]=1;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j];
		}
		cout<<endl;
	}

}