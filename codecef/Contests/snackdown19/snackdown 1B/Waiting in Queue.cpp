#include<bits/stdc++.h>
using namespace std;
#define f(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) f(i,0,n)
#define fd(i,a,b) for(i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define vi vector< int >
#define vl vector< ll >
#define ss second
#define ff first
#define ll long long
#define pii pair< int,int >
#define pll pair< ll,ll >
#define sz(a) a.size()
#define inf (1000*1000*1000+5)
#define all(a) a.begin(),a.end()
#define tri pair<int,pii>
#define vii vector<pii>
#define vll vector<pll>
#define viii vector<tri>
#define mod (1000*1000*1000+7)
#define pqueue priority_queue< int >
#define pdqueue priority_queue< int,vi ,greater< int > >
#define flush fflush(stdout)
#define primeDEN 727999983

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
       long long m,n,k,l;
       cin>>n>>m>>k>>l;
       //char endd='c';
       // long long abc=check(n,m);
       long long a[n];
       for(long long i=0;i<n;i++)
        cin>>a[i];

       long long ans=(m+1)*l-1;

       sort(a,a+n);


       long long init=(m+1)*l;

       for(long long i=0;i<n;i++)
       {
           if(init<a[i] && init>=0)
           {
               ans=0;
               break;
           }
           else
           {

               ans=min(ans,init-a[i]);
               init=init+l;
               long long j=i+1;
               while(j<n && a[i]==a[j])
               {
                   j++;
                   init=init+l;
               }
               i=j-1;
           }
           if(a[i]>k && a[i]>=0)
           {
               ans=0;
               break;
           }
       }


       if(a[n-1]<k && a[n-1]>=0)
       {
           if(init>k)
            ans=min(ans,init-k);

           else
            ans=0;
       }

       cout<<ans<<endl;
    }

    return 0;
}
