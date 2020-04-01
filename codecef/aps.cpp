#include <bits/stdc++.h>
using namespace std;

    int amprime[10000009];


    long long result[10000009];
    void prime()
    {
    for(int i=2;i<=10000000;i++)
    {
        if(!amprime[i])

    {
        for(int j=i+i;j<=10000000;j+=i)
            if(!amprime[j])
            amprime[j]=i;
                result[i]=result[i-1]+i;
    }
    else
        result[i]=result[i-1]+amprime[i];
    }
    }

    int main()
    {
    int t;
    prime();
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    cout<<result[n]<<endl;
    }
    return 0;
}
