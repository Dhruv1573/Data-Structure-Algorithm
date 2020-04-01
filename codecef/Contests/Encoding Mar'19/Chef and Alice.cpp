#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        string s,p;
        cin>>n>>s;
        int len=s.length();
        //string matrix[len][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<len/n;j++)
            {
                p.append(s,n*j+i,1);
                //break;
            }
           // break;
        }
        cout<<p<<endl;


    }
}
