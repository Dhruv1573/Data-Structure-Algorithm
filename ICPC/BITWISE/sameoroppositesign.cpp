
#include<bits/stdc++.h>
using namespace std;
/*
bool opposite(int x,int y)
{
    return ((x^y)<0);
}
*/
int main()
{
    int n,m;

    cin>>n>>m;

    if((n^m)<0)

    //    if(opposite(n,m)==true)
        cout<<"Different Sign"<<endl;
    else
         cout<<"Same Sign"<<endl;
}
