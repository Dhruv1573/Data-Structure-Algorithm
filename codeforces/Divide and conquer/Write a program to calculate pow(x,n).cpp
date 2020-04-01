#include<bits/stdc++.h>
using namespace std;

float power(float p,int q)

{
    float temp;
        if(q==0)
            return 1;
             temp=power(p,q/2);
              cout<<temp<<endl;
              cout<<temp*temp<<endl;
        if(q%2==0)
            return temp*temp;
            else
            {
                if(q>0)
                    return p*temp*temp;
                else
                    return (temp*temp)/p;
            }



}




int main()
{
    float x;
    int y;
    cin>>x>>y;
   // float z=pow(x,y);
    cout<<power(x,y);
}
