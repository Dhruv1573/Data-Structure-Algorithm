#include <iostream>
#include<unordered_map>
#include<climits>
using namespace std;
int main() {
    unordered_map<char,int> C;
    for(int i=0;i<=9;i++)
    {
        C[char('0' + i)] = i;
    }
    for(int i=0;i<26;i++)
    {
        C[char('A' + i)] = 10+i;
    }
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        unordered_map<long long,int> mp;
        for(int i=0;i<n;i++)
        {
            int base;string num;
            cin>>base>>num;
            //cout<<base<<"  "<<num<<endl;
            if(base!=-1)
            {
                bool f = false;
                long long ans = 0,multi=1;
                for(int j=num.length()-1;j>=0;j--)
                {
                    if(multi>1000000000000)
                            f = true;
                    ans += C[num[j]]*multi;
                    multi*=base;
                }
                if(f==false && ans<=1000000000000){
                if(mp.find(ans)!=mp.end())
                    mp[ans] = mp[ans] + 1;
                else
                    mp[ans] = 1;
                }
            }
            else
            {
                for(int b=2;b<=36;b++)
                {
                    long long ans = 0,multi=1;
                    bool f = false;
                    for(int j=num.length()-1;j>=0;j--)
                    {
                        if(C[num[j]]>=b || multi>1000000000000)
                            f = true;
                        ans += C[num[j]]*multi;
                        multi*=b;
                    }
                    if(f==false && ans<=1000000000000){
                    if(mp.find(ans)!=mp.end())
                        mp[ans] = mp[ans] + 1;
                    else
                        mp[ans] = 1;
                    }
                }
            }
        }
        long long final_ans = -1,mine = LONG_MAX;
        //cout<<mine<<endl;
        for(auto x : mp)
        {
            if(x.second == n)
            {
                mine = min(mine,x.first);
            }
        }
        if(mine==LONG_MAX || mine > 1000000000000)
            cout<<final_ans<<endl;
        else
            cout<<mine<<endl;
    }
    
}
