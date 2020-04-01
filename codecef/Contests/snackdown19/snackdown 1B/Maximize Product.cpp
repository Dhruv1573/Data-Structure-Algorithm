#include<bits/stdc++.h>
using namespace std;
#define lol long long
#define ld long double
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define loop(i,a,b) for(lol i=a;i<b;i++)
#define inf (long long int) 1e18
#define eps 0.000001
#define vl vector<lol>
#define sl set<lol>
#define plol pair<lol, lol>
#define mlol map<lol, lol>
#define mods 1000000007
#define MAXN 100001
#define sd(n) scanf("%d",&n)
#define slold1(n) scanf("%lold",&n)
#define slold2(n,m) scanf("%lold %lold",&n,&m)
#define pd(n) printf("%d",n)
#define plold(n) printf("%lold",n)
#define pds(n) printf("%d ",n)
#define plolds(n) printf("%lold ",n)
#define pdn(n) printf("%d\n",n)
#define ploldn(n) printf("%lold\n",n)
#define loop1(i,a,b) for(i=a;i<=b;i++)

//solution is here..............
long long solution(long long n,long long k)
{
       long long mod=n%k;
       long long a[k];
       long long num=n/k;
       for(lol i=0;i<k;i++)
       {
           a[i]=num;
       }

   if(k%2==0)
   {
       int j=0;
       for(long long j=0;j<k/2;j++)
       {
           a[k/2+j]=num+j+1;

           a[k/2-j-1]=num-(j+1);
       }

    long long start=k/2-1;
    while(mod>0 && start>=0)
    {
        a[start]=a[start]+1;
        start--;
        mod--;
    }
    long long last=k-1;
    while(mod>0)
    {
        a[last]=a[last]+1;
        last--;
        mod--;
    }
   }

   else
   {
       for(long long j=1;j<k/2+1;j++)
       {
           a[k/2+j]=num+j;

           a[k/2-j]=num-(j);
       }

       for(long long i=k-1;mod>0;i--)
       {
           a[i]=a[i]+1;
           mod--;
       }


   }
    long long sol=1;

  for(long long i=0;i<k;i++)
  {
      sol=((sol)%1000000007)*((a[i])%1000000007*(a[i]-1)%1000000007)%1000000007;
  }
  if((k*(k+1))/2>n)
        sol=-1;

   cout<<sol<<endl;

}


int main()
{
    long long t;
    cin>>t;
    for(long long i=0;i<t;i++)
    {
       long long n,k;
       cin>>n>>k;

        solution(n,k);
    }

    return 0;
}
