#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define inf (long long int) 1e18
#define eps 0.000001
#define vl vector<ll>
#define sl set<ll>
#define pll pair<ll, ll>
#define mll map<ll, ll>
#define mod 1000000007
#define MAXN 100001
//solution started from here.......
long long solution(long long n)
{
    long long l=0;
    long long r=pow(2,n);
    long long base=r;

    for(int i=0;i<n;i++)
    {
        if(i%2==1)
        {
            l=(l+r)/2;
        }
        else
            r=(r+l)/2;
    }

    if(n%2==0)
        cout<<l<<" "<<base<<" ";
    else
        cout<<r<<" "<<base<<" ";

}
int main()
{

   long long t;
   cin>>t;
    long long n;
   for(int i=0;i<t;i++)
   {
       cin>>n;

       solution(n);

   }

    return 0;
}
