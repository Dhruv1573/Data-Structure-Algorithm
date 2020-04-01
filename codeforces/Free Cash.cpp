

#include<bits/stdc++.h>
using namespace std;

int main()
{

    long p;
    cin>>p;
long count=1;
    int n,m,t[32][64];
    memset(t, 0, sizeof(t));
    long z;
    vector<int>vect;
	for(long j=0;j<p;j++)
        {
		cin>>n>>m;
		/*t[n][m]++;
		if(t[n][m] > count)
		count = t[n][m];
        */
        z=n*100000+m;
        vect.push_back(z);


        }
        sort(vect.begin(),vect.end());
        for(long i=0;i<p;i++)
        {
            if(vect[i]==vect[i+1])
                count++;
              //  cout<<vect[i];
        }

        if(count!=1)
    cout<<count;
    else
    cout<<count;





}
