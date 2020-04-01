#include <bits/stdc++.h>

using namespace std;



int main()
{

    int q;
    cin>>q;
    
    int n;
    for(int i=0;i<q;i++)
    {
    cin>>n;
        int row[n],col[n];
        for(int i=0;i<n;i++)
            row[i]=0,col[i]=0;
        
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    int x;
                cin>>x;
                row[i]+=x;
                col[j]+=x;
            }
            }
        sort(row,row+n);
        sort(col,col+n);
        int temp=0;
        for(int i=0;i<n;i++)
        {
            if(row[i]!=col[i])
                temp++;
        }
        if(temp!=0)
            cout<<"Impossible"<<endl;
        else
            cout<<"Possible"<<endl;
        
        
        }
    return 0;
}
