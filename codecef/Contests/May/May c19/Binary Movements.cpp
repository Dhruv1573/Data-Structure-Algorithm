#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,z;
        cin>>n>>z;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int>vect;
        for(int j=0;j<n;j++)
        {
            if(a[j]==0 && a[j+1]==1)
            {
                vect.push_back(j);
            }
        }
      for(int j=0;j<n;j++)
        {
            for(int i=0;i<vect.size();i++)
            {
                a[vect[i]+z]=0;
                a[vect[i]]=1;
            }
        }

        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}

