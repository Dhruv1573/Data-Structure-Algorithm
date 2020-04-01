#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a[10][10];

    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            a[i][j]=0;

        }

    }

    int node,edges,x,y;

    cin>>node>>edges;

    for(int i=0;i<edges;i++)
    {
        cin>>x>>y;
        a[x][y]=1;
    }

    if(a[3][4])
    {
        cout<<"edges available"<<endl;
     //   cout<<a[1][2];
    }
    else
        cout<<"not available"<<endl;
}
