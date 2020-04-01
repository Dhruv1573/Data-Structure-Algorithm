#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<=i)
                cout<<j<<" ";
            else
                cout<<"  "<<" ";

        }
        for(int j=n-1;j>0;j--)
        {
            int z=log10(i);
            if(z>1)
            {
            if(j<=i)
                cout<<j<<"";
            }
            else
            {
              if(j<=i)
                cout<<j<<" ";

            }
        }
        cout<<" "<<endl;
    }
}
