#include <bits/stdc++.h>
using namespace std;
#define start_routine clock_t begin = clock();
#define end_routine clock_t end = clock(); double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC; fprintf(stderr, "\nTime elapsed : %.3f seconds\n", elapsed_secs);return 0;
#define ll long long
#define mod 1000000007
#define upperlimit 1000100
#define INF 1000000100
#define INFL 1000000000000000100LL
#define eps 0.1
#define endl '\n'
#define sd(n) scanf("%d",&n)
#define sdd(n) scanf("%d %d",&n,&m)
#define slld(n) scanf("%lld",&n)
#define pd(n) printf("%d",n)
#define plld(n) printf("%lld",n)
#define pds(n) printf("%d ",n)
#define pllds(n) printf("%lld ",n)
#define pdn(n) printf("%d\n",n)
#define plldn(n) printf("%lld\n",n)
#define loop(i,a,b) for(i=a;i<b;i++)
#define loop1(i,a,b) for(i=a;i<=b;i++)
#define mp make_pair
#define pb push_back
#define pcc pair<char,char>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>
#define vii vector<pii>
#define vll vector<pll>
#define all(v) v.begin(), v.end()
#define tr(container,it) for(typeof(container.begin()) it=container.begin();it!=container.end();it++)
#define F first
#define S second
#define clr(a) memset(a,0,sizeof(a))
int main()
{
int t;
sd(t);
while(t--)
{

int a,b,c,d;
cin>>a>>b>>c>>d;
a=a-1;
b=b-1;
if(a%c==0 && b%d==0)
//pdn(Chefirnemo);
cout<<"Chefirnemo"<<endl;

else
{
if((a-1)%c==0 && (b-1)%d==0)
{
if(a-1<0 || b-1<0)
{
cout<<"Pofik"<<endl;
}
else
cout<<"Chefirnemo"<<endl;
}
else
cout<<"Pofik"<<endl;
}
}

}
