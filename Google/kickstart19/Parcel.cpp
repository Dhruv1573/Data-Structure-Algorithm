#include<bits/stdc++.h>
using namespace std;
int find_max(int n,int m,int i,int j, vector<vector<int> > solution)
{
    for(int x=0;x<n;x++)
    {
        for(int y=0;y<m;y++)
        {
            int dist=abs(i-x)+abs(j-y);

            if(solution[x][y]>dist)
                solution[x][y]=dist;
        }
    }
    int max=INT_MIN;
    for(int p=0;p<n;p++)
    {
        for(int q=0;q<m;q++)
        {
            if(max<solution[p][q])
                max=solution[p][q];
        }
    }
    return max;
}
int main()
{
    int t;
    cin>>t;
    int n,m;
    for(int i=1;i<=t;i++)
    {
        cin>>n>>m;
        string str[n];
        int ans=INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>str[i];

        }
        vector<vector<int> > solution(n);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                solution[i].push_back(9999);
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(str[i][j]=='1')
                {
                    solution[i][j]=0;
                    for(int x=0;x<n;x++)
                    {
                        for(int y=0;y<m;y++)
                        {
                            int distance=abs(i-x)+abs(j-y);
                            if(solution[x][y]>distance)
                                solution[x][y]=distance;
                        }
                    }
                }
            }

        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(str[i][j]=='0')
                {
                    int z=find_max(n,m,i,j,solution);
                    if(z<ans)
                        ans=z;
                }
            }
        }
        if(ans==INT_MAX)
            ans=0;
        cout<<"Case"<<" "<<"#"<<i<<": "<<ans<<endl;
    }

}

