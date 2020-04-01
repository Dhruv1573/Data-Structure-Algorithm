#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   int count3=0;
   if(t==5)
    count3++;
   for(int i=0;i<t;i++)
   {
       long n;
       cin>>n;
       string s;
       cin>>s;

      // n=s.length();
     vector<int>a;
     int count=0;
      for(int i=1;i<n;i++)
      {
        if(s[0]==s[i])
        {
            a.push_back(i);
            count++;
            count3++;
        }
      }


      if(count==0)
      {
          cout<<s;
      }

      else
      {
          cout<<s[0];
        for(int i=0;i<n;i++)
            count3++;
          for(int i = 1;i < n;i++)
          {
               long count2=0;
              for(int j = 0;j < a.size(); j++)
              {

                  if(a[j]+i < n && s[i] == s[a[j]+i])
                     count2++;
              }
              if(count2==count)
                cout<<s[i];
              else
              break;

          }
          int count4=0;
          for(int i=0;i<n;i++)
            count4++;

            if(count3==count4)
                count3=count4-count3;
      }


      cout<<endl;
   }

    return 0;
}
