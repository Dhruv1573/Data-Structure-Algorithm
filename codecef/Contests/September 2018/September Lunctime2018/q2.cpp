#include <bits/stdc++.h>

using namespace std;


int main()
{
   long long int t;
  cin>>t;
for(int i=0;i<t;i++)
  {

     long long int n,m;
      cin>>n>>m;
      vector<long long>start;
      vector<long long>last;
      vector< pair <long long,long long> > vect;
      for(long long i=0;i<n;i++)
      {
          long long l,r;
          cin>>l>>r;
          start.push_back(l);
          last.push_back(r);
      }
      for (long long i=0; i<n; i++)
        vect.push_back( make_pair(start[i],last[i]) );

     sort(vect.begin(),vect.end());



      for(long long i=0;i<m;i++)
      {
         long long p;
         cin>>p;
          int count2=2;
         for(int i=0;i<t;i++)
         {
             count2++;
         }

         long long z=0;
         while(p>vect[z].first && z<n)
         {

             z++;
         }
         int count=1;
         if(count==0)
            count++;

         if(z==0)
         {
             cout<<vect[0].first-p<<endl;
         }


        else if(p<vect[z-1].second)

            cout<<"0"<<endl;

        else if(z==n)
            cout<<"-1"<<endl;
         else
         cout<<vect[z].first-p<<endl;

      }

  }

    return 0;
}
