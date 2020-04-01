#include<bits/stdc++.h>
using namespace std;
string equalsB(string a,string b)
{

    int len1=a.length();
    int len2=b.length();
    if(len1>len2)
    {
        for(int i=0;i<len1-len2;i++)
        {

            b="0"+b;
        }
    }
    return b;
}
string equalsA(string a,string b)
{

    int len1=a.length();
    int len2=b.length();
    if(len2>len1)
    {
        for(int i=0;i<len2-len1;i++)
        {

            a="0"+a;
        }
    }
    return a;
}
int ans(string a,string b)
{

    int count=1;
    int n=a.length();
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]=='1' &&b[i]=='1')
        {
            int temp=2;
            bool f=false;
            if(i-1>=0 &&(a[i-1]=='0'&&b[i-1]=='1')||(a[i-1]=='1'&&b[i-1]=='0'))
            {
                i--;
                while(i>=0 &&(a[i]=='0'&&b[i]=='1')||(a[i]=='1'&&b[i]=='0'))
                {

                    temp++;
                    i--;
                    f=true;
                }
            }
            int x=count;
            //count=count+1;
            if(count<=temp)
                count=temp;
            else
                count=x;

            if(f)
                i++;
        }
    }
        return count;

}
int main()
{

    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s1,s2,a,b;
        cin>>s1>>s2;
        int len1=s1.length();
        int len2=s2.length();
        a=s1;b=s2;
        if(len1>len2)
            b=equalsB(s1,s2);
        else if(len1<len2)
            a=equalsA(s1,s2);
        else
        {
            a=s1;
            b=s2;
        }
//        cout<<a<<" "<<b<<endl;
        int a1=0,b1=0;
        for(int i=0;i<a.length();i++)
        {

            if(a[i]=='1')
                a1++;
        }
        for(int i=0;i<a.length();i++)
        {

            if(b[i]=='1')
                b1++;
        }
        if(b1==0)
            cout<<0<<endl;
        else if(a1==0)
            cout<<1<<endl;
        else
            cout<<ans(a,b)<<endl;

       // cout<<count<<endl;




    }
}
