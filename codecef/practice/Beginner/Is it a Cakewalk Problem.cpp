#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    int a[10][10];

    for(int i=0;i<t;i++)
    {
        int count=0;
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                cin>>a[i][j];

                if(a[i][j]<=30)
                    count++;
            }
        }
        if(count>=60)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;

        /*for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                cout<<a[i][j];

            }
            cout<<endl;

        }
        */

    }
}
