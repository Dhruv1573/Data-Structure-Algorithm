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
    input(t);
    loop(i,0,t)
    {
        ll n;
        input(n);
		   unordered_map<string,bool>word;
        ll total=0;
        loop(i,0,n)
        {
            string s;
            input(s);
            ll t=2;
            bool l=false;
            bool r=false;
        if(s[0]=='f' || s[0]=='d')
                l=true;
            else
                r=true;

        loop(i,1,s.length())
        {
            if((s[i]=='d'|| s[i]=='f') && l)
            {
                t=t+4;
                l=true;
            }

            else if((s[i]=='d' || s[i]=='f') && !l)
            {
                t=t+2;
                l=true;
            }
            else if((s[i]=='j' || s[i]=='k') && l)
            {
                t=t+2;
                l=false;
            }
            else
            {
                t=t+4;
                l=false;
            }

        }

            if(word[s]==true)
            {
                t=t/2;

            }
            total=total+t;
            word[s]=true;

    }
    print(total);
}
}
//Some test cases//
/*
4
5
fdjkd
dfjdk
dfd
fdjkd
kkjjk
2
jkjkjkjkdf
jdkf
8
kkkkk
ddddd
fffff
jjjjj
kkkkk
ddddd
fffff
jjjjj
5
djd
dfd
kfkdj
fdjk
f
*/
