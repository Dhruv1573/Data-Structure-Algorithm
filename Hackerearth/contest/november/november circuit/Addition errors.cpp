#include <bits/stdc++.h>
using namespace std;

long long xSum(long long n, long long m)
{

    long long res=0;
    long long multiplier=1;
    long long bit_sum;
    while (n || m)
    {
        bit_sum=(n%10)+(m%10);
        bit_sum %=10;
        res=(bit_sum*multiplier)+res;
        n /=10;
        m /=10;

        multiplier*=10;
    }
    return res;
}

long long sum(long long n,long long m)
{
    long long total=n+m;

    return total;
}

// Driver program
int main()
{
    long long t;
    cin>>t;
    for(long long i=0;i<t;i++)
    {
    long long n,m;
    cin>>n>>m;

    cout<<abs(xSum(n,m)-sum(n,m))<<endl;

}
return 0;
}
