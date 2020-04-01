
/*
8.0
10
1 355 credit 355
2 202 debit 153
3 59 debit 94
4 31 debit 63
7 355 debit 261
8 253 credit 514
9 308 debit 206
10 69 debit 137
0.6084
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double interest;
    cin>>interest;
    int n;
    cin>>n;
    int sum=0;
    int id[n-2],amount[n-2],balance[n-2];
    int arr[n-2]={0};
    string str[n-2];
    for(int i=1;i<=n-2;i++)
    {

        string s;
        cin>>id[i]>>amount[i]>>s>>balance[i];

        sum+=balance[i];
        str[i]=s;
       // arr[i]=id;

    }
    int c[n]={0},count=1;
    for(int i=1;i<=n;i++)
    {
        if(count==id[i])
            c[i]=0;
        else
            c[i]=1;
            count++;
    }
    int index;
    for(int i=1;i<=n;i++)
    {
        if(c[i]==1)
        {
            index=i;
            break;
        }

    }


   if(str[index][0]=='d')
    sum=sum+amount[index]+balance[index];
    if(str[index][0]=='c')
        sum=sum+(balance[index]-amount[index]);


    double rate;
    cin>>rate;
    double z=(double)(rate*36500)/(double)interest;
    //cout<<z<<endl;
    double ans=z-sum;
        if(ans>balance[index-1])
        cout<<index<<" "<<ans-balance[index-1]<<" "<<"credit"<<" "<<ans<<endl;
        else
            cout<<index<<" "<<balance[index-1]-ans<<" "<<"debit"<<" "<<ans<<endl;

        double p=amount[index]+balance[index]-ans;
            if(balance[index+1]>balance[index])
        cout<<index+1<<" "<<p<<" "<<"credit"<<" "<<balance[index]+amount[index]<<endl;
        else
            cout<<index+1<<" "<<ans-(amount[index]+balance[index])<<" "<<"debit"<<" "<<amount[index]+balance[index]<<endl;
       // cout<<p<<endl;



    //cout<<ceil(ans);
   // cout<<rate;

}
