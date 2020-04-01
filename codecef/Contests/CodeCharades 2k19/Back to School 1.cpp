#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
     while(t--)
     {
         string s;
         cin>>s;
         s=s+'+';

       //  cout<<s;
         vector<int>arr;
         vector<char>opt;
        int number=0;

         for(int i=0;i<s.size();i++)
         {
            if(s[i]!='+' &&  s[i]!='-' && s[i]!='=')
            {

                number=number*10 +(int) (s[i]-'0');
            }
            else
            {
                arr.push_back(number);
                number=0;
                opt.push_back(s[i]);
            }

         }
         int ans=arr[0];

         for(int i=1;i<arr.size()-1;i++)
         {
            if(opt[i-1]=='+')
            ans=ans+arr[i];
            else
            ans=ans-arr[i];
         }


         if(ans== arr[arr.size()-1])
           cout<<"Valid Equation"<<endl;
           else
           cout<<"Invalid Equation"<<endl;

     }

    return 0;
}
