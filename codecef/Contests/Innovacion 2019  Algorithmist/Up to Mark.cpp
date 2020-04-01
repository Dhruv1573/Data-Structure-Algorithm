#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   for(int i=0;i<t;i++)
   {
       long a,b;
       cin>>a>>b;

       long r=a/b;
     cout<<r;
       long remainder=a%b;
        long count=100;
       if(a%b!=0)
       {
           cout<<".";

           while(count--)
           {
              long p=remainder*10;
             long value=p/b;
               remainder=p%b;
             //  s=s+value;
             cout<<value;
               if(remainder==0)
                    break;
           }
       }

       if(count==-1 && remainder!=0)
       {
           int p=remainder*10;
           int value=p/b;
           remainder=p%b;
           if(value>5)
            value++;
           else if(value==5 && remainder>0)
            value++;
           cout <<value;

       }

    cout<<endl;

   }
    return 0;
}
