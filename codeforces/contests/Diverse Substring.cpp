#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char c[n];
    cin>>c;
    for(int i=0;i<n-1;i++)
    {
        if(c[i]!=c[i+1])
        {
            cout<<"Yes"<<endl<<c[i]<<c[i+1];
              return 0;
              //break;
        }

    }
    cout<<"No"<<endl;
}
