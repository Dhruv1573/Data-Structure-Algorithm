#include<bits/stdc++.h>
using namespace std;
#define print(n) cout<<n<<endl;
#define print1(n,m) cout<<n<<endl<<m<<endl;
#define input(n) cin>>n;
#define input1(n,m) cin>>n>>m;
#define ll long long
#define ld long double
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define loop1(i,a,b) for(ll i=a;i<=b;i++)
#define inf (long long int) 1e18
#define eps 0.000001
#define vl vector<ll>
#define sl set<ll>
#define pll pair<ll, ll>
#define mll map<ll, ll>
#define mod 1000000007
#define MAXN 100001
ll spf[MAXN];
ll gcd(ll a,ll b);
ll palindrome(string s);
ll modexp(ll a,ll b,ll m);
void sieve();
vl getFactorization(ll x);
void getZarr(string str, ll Z[]);


//FIND GCD
ll gcd(ll a, ll b){
    if (a == 0)   return b;
    if(b==0)      return a;
    if (a == b)   return a;
    if (a > b)    return gcd(a%b, b);
    return gcd(a, b%a);
}
//PALINDROME
ll palindrome(string s){
    ll l = 0;
    ll h = s.length() - 1;
    while (h > l){
        if (s[l++] != s[h--]){
            return 0;
        }
    }
    return 1;
}

ll modexp(ll a, ll b, ll m){
    if (b==0)
        return 1;
    ll temp = modexp(a,b/2,m);
    temp = (temp*temp)%m;
    if (b&1)
        return (temp*(a%m))%m; // if b is odd a^b = a^(b/2)*a^(b/2)*a
    return temp;
}
//SIEVE ALGORITHM
void sieve() {
    spf[1] = 1;
    for (ll i=2; i<MAXN; i++)
        spf[i] = i;
    for (ll i=4; i<MAXN; i+=2)
        spf[i] = 2;

    for (ll i=3; i*i<MAXN; i++) {
        if (spf[i] == i) {
            for (ll j=i*i; j<MAXN; j+=i)
                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}

vl getFactorization(ll x)
{
    vl ret;
    while (x != 1)
    {
        ret.push_back(spf[x]);
        x = x / spf[x];
    }
    return ret;
}

//Z ALGORITHM
void getZarr(string str, ll Z[]){
    ll n = str.length();
    ll L, R, k;
    L = R = 0;
    for (ll i = 1; i < n; ++i){
        if (i > R){
            L = R = i;
            while (R<n && str[R-L] == str[R])
                R++;
            Z[i] = R-L;
            R--;
        } else {
            k = i-L;
            if (Z[k] < R-i+1)
                Z[i] = Z[k];
            else {
                L = i;
                while (R<n && str[R-L] == str[R])
                    R++;
                Z[i] = R-L;
                R--;
            }
        }
    }
}
//Solution started from here//



    int main()
    {


        ll t;
        cin>>t;

        while(t--)
       {
            int n;
            cin>>n;
             int br[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
               int i,j,counter=0,x=0,z,m;
            int a[n],b[100]={0};
            for(i=0;i<n;i++)
           {
                cin>>a[i];
                b[a[i]]++;

           }
        int maximum=0;

        for(int i=0;i<n;i++)
        {

            if(maximum<a[i])
                maximum=a[i];
        }
             if(j==m)
          //   x=prime[i];

            if (x!=0)
             break;

           ll p=0;
           for(i=0;i<n;i++)
          {
               ll ans=0;
               for(j=0;j<n;j++)
               {

                         if(__gcd(a[i],a[j])==1)
                        break;

                }
               if(j>=n)
              {
                counter++;
            }

           }
           if(counter==0||n==1)
          {
                 cout<<"0"<<endl;
                 for(i=0;i<n;i++)
                     cout<<a[i]<<" ";

           }
          else
          {
                cout<<"1"<<endl;
                if(b[47]==n)
                {
                 for(i=0;i<n-1;i++)
                cout<<a[i]<<" ";

                cout<<43;
                }
                else
                {

                for(i=0;i<n-1;i++)
                cout<<a[i]<<" ";
                cout<<47;
                }
          }
          cout<<endl;



          }


    }

