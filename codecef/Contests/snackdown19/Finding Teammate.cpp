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
#define sd(n) scanf("%d",&n)
#define slld(n) scanf("%lld",&n)
#define pd(n) printf("%d",n)
#define plld(n) printf("%lld",n)
#define pds(n) printf("%d ",n)
#define pllds(n) printf("%lld ",n)
#define pdn(n) printf("%d\n",n)
#define plldn(n) printf("%lld\n",n)
#define REP(i,a,b) for(i=a;i<=b;i++)
ll spf[MAXN];
ll gcd(ll a,ll b);
ll palindrome(string s);
ll modexp(ll a,ll b,ll m);
void sieve();
vl getFactorization(ll x);
void getZarr(string str, ll Z[]);

long long e = 1000000007l;

//Macros Upper me hai and jaldi se koi function use karna hai to wo niche me hai /// #Nalle Amitians. //#Bhai_Bhai


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

//Solution Started from Here Chhotu //Enjoy and Happy Coding
bool areDistinct(vector<long long> arr)
    {
        long long n = arr.size();
         // Put all array elements in a map
         map<int,bool>s ;
         for(ll i=0;i<n;i++)
            {
               s.insert(pair<long, long>(arr[i],true));
            }

         return (s.size()==arr.size());
    }

bool isSame(vector<long long>arr, ll n)
{
     ll a=arr[0];

    for (ll i=1;i<n;i++)
    {
        if (arr[i]!=a)
            return true;
    }
    return false;
}

ll product(ll n)
{
    ll p1 = 1;
    for(int i=1;(n-i)>=1;i+=2)
    {
    p1=(p1*(n-i))%e;
    }
        return p1;
}
int main()
{
    ll t;
    cin>>t;
    ll n;
    for(ll i=0;i<t;i++)
    {
        cin>>n;
        vector<long long>vect;
        vector<long long>vect1;
        vector<long long>arr(n);
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
        }
     /*   if(areDistinct((arr)))
        {
            //cout<<"1"<<endl;
        }
        else
        {
            if(!isSame(arr,n))
            {
               // cout<<"yes"<<endl;
                int product=1;
                for(ll i=n-1;i>=1;i=i-2)
                    product=product*i;
                  //  cout<<product%e<<endl;
            }
            else
            {
                */
               // cout<<"no"<<endl;
                sort(arr.begin(),arr.end());

                ll c=1;
            for(ll i=1;i<n;i++)
            {
            if(arr[i]==arr[i-1])
            {
                c++;
                continue;

            }
                vect.push_back(c);
                c=1;
            }

            vect.push_back(c);
            if(vect.size()==1)
             {
              long long n1 = product(n);
              cout<<n1%e<<endl;
             }
           else if(vect.size()==n)
           {
             cout<<1<<endl;
           }
          else
         {
        for(ll i=vect.size()-1;i>=1;i--)
         {
          ll l=vect[i];
          if(l==0)
            continue;
           if(l!=1)
          {
          if(l%2==0)
           {
           ll pairs=product(l);
          vect1.push_back(pairs);
          l=0;
         }
        else
        {
       ll pairs=product(l-1);
       ll sec=l;
       vect1.push_back(pairs);
       l = 0;
       ll pre=vect[i-1];
      vect1.push_back(sec*pre);

     vect[i-1]--;
    }
   }
    else
   {
    ll pre=vect[i-1];

    vect[i-1]=pre-1;
    vect1.push_back(pre);
     l=0;

    }
   }
    if(vect[0]!=1&&vect[0]!=0&&vect[0]!=2)
    {
    vect1.push_back(product(vect[0]));
    }
    ll m1 = 1;
    for(ll i=0;i<vect1.size();i++)
    {
    m1=(m1*vect1[i])%e;
    }
    cout<<m1<<endl;

         }
        }

    }




