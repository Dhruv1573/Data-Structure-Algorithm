#include<bits/stdc++.h>
using namespace std;
//following code for undirected graph
int main()
{

    int v,e;
    //v ->no of vertices
    //e ->no of edges
    cin>>v>>e;
    int a[v+1][v+1];
    for(int i=1;i<v+1;i++)
    {
        for(int j=1;j<v+1;j++)
        {
            a[i][j]=0;
        }
    }
    for(int i=0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        for(int i=1;i<v+1;i++)
        {
            for(int j=1;j<v+1;j++)
            {
                a[x][y]=1;
                a[y][x]=1;
            }
        }
    }
    for(int i=1;i<v+1;i++)
    {
        for(int j=1;j<v+1;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


}
