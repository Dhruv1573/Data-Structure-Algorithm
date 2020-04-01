#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    bool f=true;
    int len1=s1.length();
    int len2=s2.length();

    if(len1>len2)
    {
    for(int i=0;i<len2;i++)
    {
        if((s1[i]=='a' || s1[i]=='e' ||s1[i]=='i' ||s1[i]=='o'|| s1[i]=='u') && (s2[i]=='a' || s2[i]=='e' ||s2[i]=='i' ||s2[i]=='o'|| s2[i]=='u'))
            f=true;
            else if((s1[i]!='a' || s1[i]!='e' ||s1[i]!='i' ||s1[i]!='o'|| s1[i]!='u')&&(s2[i]=='a' || s2[i]=='e' ||s2[i]=='i' ||s2[i]=='o'|| s2[i]=='u'))
                f=false;
            else if((s1[i]=='a' || s1[i]=='e' ||s1[i]=='i' ||s1[i]=='o'|| s1[i]=='u')&&(s2[i]!='a' || s2[i]!='e' ||s2[i]!='i' ||s2[i]!='o'|| s2[i]!='u'))
                f=false;
                else if((s1[i]!='a' || s1[i]!='e' ||s1[i]!='i' ||s1[i]!='o'|| s1[i]!='u')&&(s2[i]!='a' || s2[i]!='e' ||s2[i]!='i' ||s2[i]!='o'|| s2[i]!='u'))
                    f=true;
    }
    }
    if(len1<=len2)
    {
    for(int i=0;i<len1;i++)
    {
        if((s1[i]=='a' || s1[i]=='e' ||s1[i]=='i' ||s1[i]=='o'|| s1[i]=='u') && (s2[i]=='a' || s2[i]=='e' ||s2[i]=='i' ||s2[i]=='o'|| s2[i]=='u'))
            f=true;
            else if((s1[i]!='a' || s1[i]!='e' ||s1[i]!='i' ||s1[i]!='o'|| s1[i]!='u')&&(s2[i]=='a' || s2[i]=='e' ||s2[i]=='i' ||s2[i]=='o'|| s2[i]=='u'))
                f=false;
            else if((s1[i]=='a' || s1[i]=='e' ||s1[i]=='i' ||s1[i]=='o'|| s1[i]=='u')&&(s2[i]!='a' || s2[i]!='e' ||s2[i]!='i' ||s2[i]!='o'|| s2[i]!='u'))
                f=false;
                else if((s1[i]!='a' || s1[i]!='e' ||s1[i]!='i' ||s1[i]!='o'|| s1[i]!='u')&&(s2[i]!='a' || s2[i]!='e' ||s2[i]!='i' ||s2[i]!='o'|| s2[i]!='u'))
                    f=true;
    }
    }
    if(f==true)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;



}
