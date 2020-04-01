#include<iostream>
using namespace std;
int main()
{
    int n,diff,fifty=0,hundred=0,thousand=0,sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

        if(a[i]==50)
        {
            fifty++;
        }
        if(a[i]==100)
        {
            hundred++;
        }
        if(a[i]==200)
        {
            thousand++;
        }
       // cout<<fifty<<" "<<hundred<<" "<<thousand;
        diff=a[i]-50;
        if(diff==50)
        {
            if(fifty>0)
            {
                fifty--;
            }
            else
            {
                sum+=50;

            }
        }
        if(diff==150)
        {
            if(hundred>0 && fifty>0)
            {
                hundred--;
                fifty--;
            }
            else
            {
                sum+=150;

            }
        }
    }
    if(sum==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}

