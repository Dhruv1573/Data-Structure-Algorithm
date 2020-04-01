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
int find_answer(vector<int>vect,int i,int n)
{
    int x=n/i;
    int  ans=0;
    int add_pos=i-1;
    for(int k=0;k<i;k++)
    {
       if(vect[k]!=0)
           ans=ans+abs(x-vect[k]);
            int add_no=0;
            if(vect[k]>x)
             {
               add_no=vect[k]-x;
                vect[k]=x;
                while(add_no>0)
                {
                    int req=x-vect[add_pos];
                    if(req<add_no)
                      {
                        vect[add_pos]=x;
                        add_pos--;
                        add_no=add_no-req;
                        }
                        else
                        {
                           vect[add_pos]+=add_no;
                             add_no=0;
                        }
                }
        }

    }
    return ans;
}

bool fun(int a,int b)
  {
      return a>b;
  }
int main()
{
    int t;
    cin>>t;
   for(int i=0;i<t;i++)
    {
       string s;
       cin>>s;
       int arr[26]={0};
       int ans;
       for(int i=0;i<s.length();i++)
       {
           arr[s[i]-'A']++;
       }
  vector<int>vect;
      for(int i=0;i<26;i++)
     {
         vect.push_back(arr[i]);
     }

     sort(vect.begin(),vect.end(),fun);
       vector<int>answer;
    int n=s.length();
    int max=n;
     for(int i=1;i<27;i++)
       {
        if(n%i==0)
        {
          int ans=find_answer(vect,i,n);
         answer.push_back(ans);
        }
       }
       int min=n;
      for(int i=0;i<answer.size();i++)
          {
              if(min>answer[i])
              min=answer[i];
          }
          cout<<min<<endl;
    }
}
