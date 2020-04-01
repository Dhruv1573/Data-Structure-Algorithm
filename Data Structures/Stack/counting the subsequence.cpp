
#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
    cin>>s;
    int arr[26]={0};
    int brr[26]={0};
    for(int i=0;i<s.length();i++)
    {
        arr[s[i]-'a']=(arr[s[i]-'a']+i)%1000000007;
        brr[s[i]-'a']++;
    }


    int t;
    cin>>t;
    while(t--)
    {
        char ch;
        cin>>ch;
        if(brr[ch-'a']==0)
            cout<<0<<endl;
        else
        cout<<arr[ch-'a']+1<<endl;
    }
    return 0;
}
