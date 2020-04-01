#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long l,r;
       cin>>l>>r;
       l=l-1;
       long s1=(l * (2+ (l-1)*2)/2);


       long s2=(r * (2+ (r-1)*2)/2);

      // cout<<s1<<" "<<s2<<endl;
       cout<<s2-s1<<endl;
    }
    return 0;
}
