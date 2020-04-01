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
#define lli (long long int) 1e18
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

const int inf = 1e9+7;
int main()
{

int t;
cin>>t;
for(int i=0;i<t;i++)
{
    int n,m;
    cin>>n>>m;
    string s;
    int a[n][m],b[n][m];
    for(int i=0;i<n;i++)

        {
            cin>>s;
        for(int j=0;j<m;j++)
        {
            if(s[j]=='.')
            a[i][j]=0;
            else
                 a[i][j]=1;
          b[i][j]=a[i][j];
        }
        }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<m-1;j++)
        {
            if(a[i][j]==0 && a[i+1][j]==0 && a[i][j+1]==0 && a[i+1][j+1]==0)
            {
                b[i][j]=1;
                b[i+1][j]=1;
                 b[i][j+1]=1;
                 b[i+1][j+1]=1;
            }
        }
    }
    int ans=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(b[i][j]==0)
                ans=0;
        }
    }
    if(ans)
        cout<<"YES"<<endl;
    else
     cout<<"NO"<<endl;
}
}
