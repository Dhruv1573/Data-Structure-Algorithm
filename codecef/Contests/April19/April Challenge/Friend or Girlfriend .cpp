/*

#include<bits/stdc++.h>
using namespace std;

// Function to print all sub strings
void subString(string s, int n, string x)
{
    //string x="a";
    int count=0;

	for (int i = 0; i < n; i++)
    {
        for (int len = 1; len <= n - i; len++)
        {
            string b=s.substr(i, len);
            if(strstr(b.c_str(),x.c_str()))
                count++;

        }

    }
    cout<<count<<endl;

}


int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        string s,x;
        cin>>s>>x;
        subString(s,s.length(),x);

    }


	return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
   for(int i=0;i<t;i++)
    {
        long n;
        cin>>n;
        string s;
        char x;
        cin>>s>>x;
         s=s+x;

       long total_sub=(n*(n+1))/2;
       long  count=0;
       for(int j=0;j<n+1;j++)
       {
          if(s[j]==x)
           {
               total_sub=total_sub-(count*(count+1))/2;
               count=0;
           }
           else
           {
                count++;
           }

       }

        cout<<total_sub<<endl;
    }


    return 0;
}
