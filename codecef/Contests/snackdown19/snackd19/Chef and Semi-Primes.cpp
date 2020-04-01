#include<bits/stdc++.h>
using namespace std;
int n=200;
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;

}
int sieve(int m)
{

    vector<int>vect;
      bool prime[n+1];
    memset(prime,true,sizeof(prime));

    for(int p=2; p*p<=n; p++)
    {
        if(prime[p]==true)
        {
            for(int i=p*2;i<=n;i+=p)
                prime[i]=false;
        }
    }

    // Print all prime numbers
    for (int p=2; p<=n; p++)
       if (prime[p])
            vect.push_back(p);



            vector<int>vectstore;
           for(int i=0;i<vect.size();i++)
           {
               for(int j=i+1;j<vect.size();j++)
               {
                   int pro=vect[i]*vect[j];
                   if(pro<n)
                    vectstore.push_back(pro);
               }
           }
           vector<int>total(2000);
            for(int i=0;i<vectstore.size();i++)
            {
            for(int j=0;j<vectstore.size();j++)
                {
                int z=vectstore[i]+vectstore[j];
            if(z<=n)
                total[z]=1;
            }
            }
            if(total[m]==1)
               cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
}
int main()
{
    int t;
    cin>>t;
    int m;
    for(int i=0;i<t;i++)
    {
        cin>>m;

        sieve(m);
    }
}
