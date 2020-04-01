#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,m[500],t;
    cin >> n;
    m[0] = 1;
    t = 1;
    for(int i = 2; i <= n; i++)
    {

        int cary = 0;
        for(int j = 0; j < t; j++)
        {
            int p = m[j]*i+cary;
            m[j] = p%10;
            cary = p/10;
        }
        while(cary)
        {
            m[t] = cary%10;
            cary/=10;
            t++;
        }
    }
    for(int i = t-1; i>= 0; i--)cout << m[i];
    cout << endl;
    return 0;
}