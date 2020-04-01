
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {

        cin>>arr[i];
    }
    int ones=0,twos=0,common_bit_mask;

    for(int i=0;i<n;i++)
    {
    twos=twos|(ones & arr[i]);

    cout<<"Twos are :"<<twos<<endl;


    ones=ones^arr[i];

    //cout<<"ones are :"<<ones<<endl;
    common_bit_mask=~(ones & twos);

    cout<<"common_bit_mask are :"<<common_bit_mask<<endl;
    ones=ones & common_bit_mask;

    //cout<<"next ones are : "<<ones<<endl;
    twos=twos & common_bit_mask;

    //cout<<"next Twos are :"<<twos<<endl;
    }
    cout<<ones;

}
