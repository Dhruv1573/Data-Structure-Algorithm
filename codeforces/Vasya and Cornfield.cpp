#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d;

    cin>>n>>d;

    int m;

    cin>>m;

      //A
    int x1=0;
    int y1=d;
    //B
    int x2=d;
    int y2=0;
    //C
    int x3=n;
    int y3=n-d;
    //D
    int x4=n-d;
    int y4=n;

    float A=abs((x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2)+abs((x1*(y4-y3)+x4*(y3-y1)+x3*(y1-y4))/2);

    int p,q;
    float A1,A2,A3,A4;
    for(int i=0;i<m;i++)
    {
        //P
        cin>>p>>q;

     /*       //area of PAB
    A1=abs((p*(y2-y1)+x1*(q-y2)+x2*(y1-q))/2);
    //area of PBC
    A2=abs((p*(y2-y3)+x2*(y3-q)+x3*(q-y2))/2);
    //area of PCD
    A3=abs((p*(y3-y4)+x3*(y4-q)+x4*(q-y3))/2);
    //area of PAD
    A4=abs((p*(y1-y4)+x4*(q-y1)+x1*(y4-q))/2);

    //int z=
    //cout<<A<<endl;
   // cout<<A1+A2+A3+A4<<endl;

   */
   if(p-q-d<=0 && p-q+d>=0 && p+q-d>=0 && p+q-2*n+d<=0)



        //if(A==A1+A2+A3+A4 || A>=A1+A2+A3+A4 )
        cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }





    //cout<<A;

    //cout<<A1+A2+A3+A4;







}
