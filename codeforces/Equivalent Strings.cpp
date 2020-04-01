#include<bits/stdc++.h>
using namespace std;

string equivalents(string s)
{
    if(s.length()%2!=0)
        return s;

    string str1=equivalents(s.substr(0,s.length()/2));
    string str2=equivalents(s.substr(s.length()/2,s.length()/2));
        if(str1<str2)
            return str1+str2;
        else
            return str2+str1;
}


int main()
{

    string s1,s2;

    cin>>s1>>s2;

    int len1=s1.length();
    int len2=s2.length();
   // cout<<len1<<len2;

   if(equivalents(s1)==equivalents(s2))
    cout<<"YES";
   else
    cout<<"NO";


   /*
    int count=0;
    for(int i=0;i<len1;i++)
    {
        if(s1[i]==s2[i])
            count++;
    }


    int sum1=0,sum2=0,sum3=0,sum4=0;
    if(count==len1)
        cout<<"YES";
        else
        {
            for(int i=0;i<len1/2;i++)
            {
                sum1+=(s1[i]);
                sum2+=(s2[i]);
            }
            for(int i=(len1/2);i<len1;i++)
            {
                sum3+=(s1[i]);
                sum4+=(s2[i]);
            }

          //  cout<<sum1<<" "<<sum2<<" "<<sum3<<" "<<sum4;
            if(sum1==sum2 && sum3==sum4)
               cout<<"YES";
             else if(sum1==sum4 && sum3==sum2)
               cout<<"YES";
               else
               cout<<"NO";
        }
*/
}
