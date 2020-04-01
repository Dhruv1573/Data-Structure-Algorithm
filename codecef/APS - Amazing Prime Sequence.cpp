
#include<bits/stdc++.h>
using namespace std;



    int prime[10];
    //memset(prime,true,sizeof(prime));

  //  prime[1]=1;
    int result[10];
    void pre()
    {

    for(int i=2;i<1000;i++)
    {
        if(prime[i]==0)
        {
            prime[i]=i;
            //cout<<prime[i]<<endl; //it gives 1 because of boolean type

            for(int j=2*i;j<1000;j=j+i)
                if(prime[j]==0)
                prime[j]=i; //here multiple of 2,3,4....etc descarded .
               // cout<<prime[j]<<endl;
               //int min=99999;
               //if(min>prime[])
               result[i]=result[i-1]+i;

        }
        else
            result[i]=result[i-1]+prime[i];

    }
        //cout<<result[n]<<endl;

    }

    int main()
    {


    pre();
    int t;
    cin>>t;

    int n;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        cout<<result[n]<<endl;

    }
    return 0;
    }

