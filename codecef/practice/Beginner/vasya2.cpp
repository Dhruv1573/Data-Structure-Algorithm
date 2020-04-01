
#include <bits/stdc++.h>

using namespace std;


int main()
{
   int n;
   cin>>n;
   string str;
   cin>>str;
  // vector<int>arr;
   int sum=0;
   for(int i=0;i<n;i++)
   {
     //  arr.push_back(str[i]-'0');
       sum=sum+(str[i]-'0');
   }
   int s=0;
   bool ans=false;
   if(sum==0)
    ans=true;
   for(int k=2;sum>0;k++)
   {
      int i=sum/k;
      int j=0,s=0;
       while(s<i && j<str.size())
       {
          s=s+str[j];
           if(s==i)
             s=0;
             if(s>i)
                break;
           j++;
       }
       if(s==0)
       {
           ans=true;

           break;
       }
   }
  if(ans)
    cout<<"YES"<<endl;
  else cout<<"NO"<<endl;

    return 0;
}
