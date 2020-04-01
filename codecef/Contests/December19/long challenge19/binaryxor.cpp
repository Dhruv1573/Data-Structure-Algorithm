#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long
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
string xori(string s1,string s2)
{
    int len1=s1.length();
    int len2=s2.length();
    if(len1>len2)
    {
        for(int i=0;i<len1-len2;i++)
        {
            s2="0"+s2;
        }
    }
    else
    {
    for(int i=0;i<len2-len1;i++)
        {
            s1="0"+s1;
        }
    }
    string s="";
    int len3=s1.length();
    for(int i=0;i<len3;i++)
    {
        s+=(((s1[i]-'0')^(s2[i]-'0'))+'0');
    }
    return s;
}
string andi(string s1,string s2)
{
    int len1=s1.length();
    int len2=s2.length();
    if(len1>len2)
    {
        for(int i=0;i<len1-len2;i++)
        {
            s2="0"+s2;
        }
    }
    else
    {
    for(int i=0;i<len2-len1;i++)
        {
            s1="0"+s1;
        }
    }
    string s="";
    int len3=s1.length();
    for(int i=0;i<len3;i++)
    {
        s+=(((s1[i]-'0')&(s2[i]-'0'))+'0');
    }
    return s;
}
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
ll power(int n,int k)
{
    if(k==0)
        return 1;
    ll y=(power(n,k/2))%mod;
    if(k&1)
        return n*((y*y)%mod)%mod;
    return (y*y)%mod;

}

int main()
{
vector<ll ll>vect(1000000);
    vect[0]=1;
    vect[1]=1;
    vect[2]=2;
    for(int i=3;i<1000000;i++)
    vect[i]=(i*vect[i-1])%mod;
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        ll n;
        cin>>n;
        string a,b;
        cin>>a>>b;

        ll onea=0,oneb=0;
        for(int i=0;i<a.length();i++)
            if(a[i]=='1')
            onea++;
        for(int i=0;i<a.length();i++)
            if(b[i]=='1')
            oneb++;

       ll x;
        if((onea+oneb)<=n)
            x=onea+oneb;
        else
            x=n-(onea+oneb-n);
            int ans=0;
        for(int i=abs(onea-oneb);i<=x;i+=2)
        {
            ll ans1=vect[i];
            ll ans2=vect[n-i];
            ll ans3=vect[n];
            ll ans4=(ans1*ans2)%mod;
            ll ans5=power(ans4,mod-2);
            ll ans6=(ans3*ans5)%mod;
            ans=ans+ans6;
            ans=ans%mod;

        }
        cout<<ans<<endl;



    }
}
