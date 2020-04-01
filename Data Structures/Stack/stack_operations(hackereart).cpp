#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,k,max=0;
    cin>>n>>k;
    std::vector<int>vect(n);
    for(int i=0;i<vect.size();i++)
    {
        cin>>vect[i];
        if(max<vect[i])
            max=vect[i];
    }
    if(k>n)
        cout<<-1<<endl;
std::vector<int>vect1;
for(int i=0;i<k-1;i++)
{

    vect.pop_back();
    vect1.push_back(z);

}
for(int i=0;i<k-1;i++)
    cout<<vect1[i]<<endl;
    int max1=0;

   // cout<<max;


}
