#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        int n;
        cin>>n;
        int a[n],b[n],update[n]={0};
        for(int j=0;j<n;j++)
            cin>>a[j];
        for(int j=0;j<n;j++)
            cin>>b[j];
        int arr1[n],arr2[n];
        for(int i=0;i<n;i++)
        {
            int l=i-a[i];
            if(l<0)
                arr1[i]=0;
            else
                arr1[i]=l;

            int r=i+a[i];
           // cout<<r<<endl;
            if(r>=n)
                arr2[i]=n-1;
            else
                arr2[i]=r;

        }

        vector<int>vect(n+1);
        vect[0]=update[0],      vect[n]=0;
        for (int i=1;i<n;i++)
            vect[i]=update[i]-update[i-1];
        for(int i=0;i<n;i++)
        {
           // for(int j=arr1[1];j<=arr2[i];j++)
             //   update[j]++;
             int l=arr1[i];
             int r=arr2[i];
             vect[l]++;
             vect[r+1]--;
        }
        for (int i=0;i<n;i++)
        {
        if (i==0)
            update[i]=vect[i];
        else
            update[i]=vect[i]+update[i - 1];

       // cout <<update[i] << " ";
    }
    //cout << endl;

        sort(update,update+n);
        sort(b,b+n);
        int f=0;
        for(int i=0;i<n;i++)
        {
            if(b[i]!=update[i])
            {
                f=1;
                break;
            }
        }
        if(f==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }
}
