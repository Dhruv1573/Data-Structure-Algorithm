#include<bits/stdc++.h>
using namespace std;
 long e = 1000000007l;
bool areDistinct(vector<int> arr)
    {
        int n = arr.size();
         // Put all array elements in a map
         map<int,bool>s ;
         for(int i=0;i<n;i++)
            {
               s.insert(pair<int, int>(arr[i],true));
            }

         return (s.size()==arr.size());
    }

bool isSame(vector<int>arr, int n)
{
     int a=arr[0];

    for (int i=1;i<n;i++)
    {
        if (arr[i]!=a)
            return true;
    }
    return false;
}


long total(long n)
{
    long p1 = 1;
    for(int i=1;(n-i)>=1;i+=2)
    {
    p1=(p1*(n-i))%e;
    }
        return p1;
}
int main()
{
   long long t;
    cin>>t;
   long long n;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        vector<long long>vect;
        vector<long long>vect1;
       int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        sort(arr,arr+n);
      long long c  = 1;
    for(long long i=1;i<n;i++)
    {
        if(arr[i]==arr[i-1])
        {
            c++;
        continue;

        }
        vect.push_back(c);
        c=1;
    }

       vect.push_back(c);
           if(vect.size()==1)
             {
              long long n1 = total(n);
              cout<<n1%e<<endl;
            }
         else if(vect.size()==n)
          {
          cout<<1<<endl;
          }
        else
         {
        for(long long i=vect.size()-1;i>=1;i--)

         {
          long long l=vect[i];

           if(l==0)
           continue;

           if(l!=1)
          {
          if(l%2==0)
           {
           long long pairs = total(l);
          vect1.push_back(pairs);
          l = 0;
         }
        else
        {
       long long pairs=total(l-1);
       long long sec=l;
       vect1.push_back(pairs);
       l = 0;
       long long pre=vect[i-1];
      vect1.push_back(sec*pre);

     vect[i-1]=vect[i-1]-1;
    }
   }
    else
   {
    long long pre =vect[i-1];

    vect[i-1]=vect[pre-1];
    vect1.push_back(pre);
     l = 0;

    }
   }
    if(vect[0]!=1&&vect[0]!=0&&vect[0]!=2)
    {
    vect1.push_back(total(vect[0]));
    }
    long long m1 = 1;
    for(long  long i=0;i<vect1.size();i++)
    {
    m1=(m1*vect1[i])%e;
    }
    cout<<m1<<endl;


            }

        }
    }




