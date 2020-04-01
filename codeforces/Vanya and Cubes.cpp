
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;

     int sum=0,temp=0,count=0,i;
    for(i=1;;i++)
    {
        sum=sum+i;
        temp=sum+temp;
        if(temp>n)
        {
            break;
        }
        count++;
    }
    cout<<count;
}
