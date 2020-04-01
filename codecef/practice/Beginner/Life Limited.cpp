#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    char a[3][3];
    for(int i=0;i<t;i++)
    {
        bool f=false;
        for(int i=1;i<=3;i++)
        {
            for(int j=1;j<=3;j++)
            {
                cin>>a[i][j];

              //  if(a[i][j]=='l' && a[j][i+1]=='l')
                //    f=true;
            }
        }
         for(int i=1;i<=2;i++)
        {
            for(int j=1;j<=2;j++)
            {


                if(a[i][j]=='l' && a[i+1][j]=='l' && a[i+1][j+1]=='l')
                    f=true;
            }
        }
        if(f==true)
            cout<<"yes"<<endl;
            else
        cout<<"no"<<endl;
    }

}
