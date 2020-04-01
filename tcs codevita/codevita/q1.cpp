#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,amount,note100,note200,note500,note1000;
    cin>>n>>amount>>note100>>note200>>note500>>note1000;

    int count1=0,count2=0,count3=0,count4=0;
    vector<int>vect;
    for(int i=0;i<note100;i++)
    {
       i=i*note100;
        for(int j=0;j<note200;j++)
        {
            j=j*note200;
            for(int k=0;k<note500;k++)
            {
                k=k*note500;
                for(int l=0;l<note1000;l++)
                {
                    l=l*note1000;
                    if((i+j+k+l)<=n)
                    vect.push_back(i+j+k+l);
                }
            }
        }
    }
    int max=0;
    for(int i=0;i<vect.size();i++)
    {
        if(max<vect[i]&&vect[i]<n)
            max=vect[i];
    }
    cout<<max<<endl;


}
