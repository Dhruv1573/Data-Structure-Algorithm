#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n,m;
    for(int i=0;i<t;i++)
    {
        cin>>n>>m;
        char a[n][m];
        int count=0,ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];

            }



        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j]=='.'&& a[i][j+1]=='.'||( a[i+1][j]=='.'&&a[i+1][j+1]=='.'))
                    count++;
            }
        }
        if(count=0)
            cout<<"yes"<<endl;
                else
                cout<<"no"<<endl;

            }

}
