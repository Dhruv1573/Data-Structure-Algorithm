#include <bits/stdc++.h>
using namespace std;
int main()
{

    long prod=1;
       vector<long>vect;
       vect.push_back(1);
        for(int i=1;i<=1000000;i++)
        {
            prod=((prod)%(1000000007)*i%(1000000007))%(1000000007);
            vect.push_back((vect[i-1]%(1000000007)*(i+1)%(1000000007))%(1000000007));
        }


    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long n;
        cin>>n;

        cout<<vect[n]-1<<endl;
    }
}
