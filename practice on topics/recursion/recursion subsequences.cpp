#include<bits/stdc++.h>
using namespace std;
void subsequences(char in[],char out[],int i, int j)
{
    //Base case
    if(in[i]=='\0')
    {
        out[j]='\0';
        cout<<out<<" ";
        return;
    }

    //Recursive case
    //1. include
    out[j]=in[i];
    subsequences(in,out,i+1,j+1);

    //2.Excluding
    out[j]='\0';
    subsequences(in,out,i+1,j);


}
int main()
{
    char in[100]="abc";
    char out[100];
    subsequences(in,out,0,0);
}
