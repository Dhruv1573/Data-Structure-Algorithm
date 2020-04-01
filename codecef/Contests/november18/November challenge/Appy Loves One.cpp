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
int main()
{
    int n,q,k;
  cin>>n>>q>>k;
  vector<int>vect;
  for(int i=0;i<n;i++)
   {
       int a;
       cin>>a;
       vect.push_back(a);
   }

   string s;
   cin>>s;
   for(int i=0;i<q;i++)
   {
       if(s[i]=='?')
       {
           int pre[n]={0};
           pre[0]=vect[0];
          for(int i=1;i<n;i++)
            {
              if(vect[i]==1)
             pre[i]=pre[i-1]+vect[i];
            }


            int maximum=0;
           for(int i=0;i<n;i++)
            {
               if(pre[i]>maximum)
               {
                maximum=pre[i];
               }
            }

          if(maximum>k)
                maximum=k;

          cout<<maximum<<endl;
       }
       else
       {
           int value=vect[n-1];
           for(int i=0;i<n;i++)
           {
             int  temp=vect[i];
               vect[i]=value;
               value=temp;
           }

       }
   }

    return 0;
}
