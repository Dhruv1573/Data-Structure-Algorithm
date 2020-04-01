
#include <bits/stdc++.h>

using namespace std;

int sum(int a,int b)
{
    return a+b;
}

long solution(long a[],long b[],long n)
{
    long total[n];
        bool result=true;
       for(int i=0;i<n;i++)
        {
            total[i]=b[i]-a[i];
            if(total[i]<0)
                result=false;
                else if(total[i]>0)
                    result=true;
                    else if(total==0)
                        result=true;
        }

        int a1[n]={0};

       for(int i=0;i<n-2;i++)
       {
          if(a1[i]!=total[i])
          {
              int z=total[i]-a1[i];
              int p=z;
              int q=2*z;
              int r=3*z;
              a1[i]=a1[i]+p;
              a1[i+1]=a1[i+1]+q;
              a1[i+2]=a1[i+2]+r;
          }
           if(a1[i]>total[i])
           {
               result=false;
           }
           if(a1[i]<total[i])
           {

           }
           if(!result)
            break;
       }
        int count=0;
       if(result && total[n-2]==a1[n-2] && total[n-1]==a1[n-1])
        count++;
       if(count!=0)
       cout<<"TAK"<<endl;
        else
        cout<<"NIE"<<endl;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
       int n;
       cin>>n;
       long a[n];
       long b[n],max=0,max1=0;
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
            if(max>b[i])
            max=b[i];
       }

       for(int i=0;i<n;i++)
       {
        cin>>b[i];
        if(max1>b[i])
            max1=b[i];
       }

        int start=0,end=n-1;
        int mid=(start+end)/2;
        if(a[mid]>max || b[mid]>max1)
        {
            mid--;
        }
        else if(a[mid]<max || b[mid]<max1)
        {
            mid++;
        }
        else
        {
            int x=mid;
        }

    solution(a,b,n);

    }
    return 0;
}
