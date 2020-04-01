#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
   long long int n,x,s,a,b,box;
    while(t--)
    {
        cin>>n>>x>>s;
        box=x;
        for(int i=1;i<=s;i++)
        {
         cin>>a>>b;

         if(a==box)
         {
            box=b;

         }
         else if(box==b)
         {
             box=a;
         }



        }
        cout<<box<<endl;

    }
}
