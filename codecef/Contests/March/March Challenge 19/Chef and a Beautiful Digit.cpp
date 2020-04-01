
#include<bits/stdc++.h>
using namespace std;
int find_min(vector<long long>vect,long index,long sizeofvector)
{

    long long newmini=INT_MAX,newindex;

    for(int i=index+1;i<sizeofvector;i++)
    {
        if(newmini>vect[i] && vect[i]!=0)
        {
            newmini=vect[i];
            newindex=i;
        }
    }
    return newindex;


}

int main()
{

    int t;
    cin>>t;
    long long n,d;

    for(int i=0;i<t;i++)
    {
        vector<long long>vect;
        cin>>n>>d;
        long z=log10(n)+1;
       // cout<<z<<endl;
        while(n!=0)
        {
        int rem=n%10;
        n=n/10;
        vect.push_back(rem);
        }
        reverse(vect.begin(),vect.end());
      //  sort(vect.begin(),vect.end());
        if(vect.size()>2)
        {
      //  vector<int>vect1,vect2;
        long long mini=INT_MAX,mini_index,update_min_index,count1=0,count2=0;
            for(int i=0;i<vect.size();i++)
            {
                if(vect[i]>d)
                {
                    vect[i]=0;
                    vect.push_back(d);
                    count1++;
                }
              //  cout<<vect[i];
            }
        for(int i=0;i<vect.size();i++)
            {
                if(mini>vect[i] && vect[i]!=0)
                {
                     //vect[i]=0;
                    mini=vect[i];
                    mini_index=i;
                   // vect[i]=0;

                }

               // cout<<vect[i];

            }
            for(int i=0;i<mini_index;i++)
            {
                vect[i]=0;
                vect.push_back(d);
                count2++;
            }

           // cout<<mini_index<<endl;
                long x=mini_index;

            while(true)
            {
                update_min_index=mini_index;
                mini_index=find_min(vect,update_min_index,z);

                if(mini_index==update_min_index)
                    break;

                   // cout<<update_min_index<<endl;
                   // cout<<mini_index<<endl;


                for(int i=update_min_index+1;i<mini_index;i++)
                {
                    vect[i]=0;
                    vect.push_back(d);
                   // cout<<vect[i];
                }
               // cout<<endl;
            }
            vector<long> vect1;
            for(long i=0;i<vect.size();i++)
            {
                if(vect[i]!=0)
                  vect1.push_back(vect[i]);
            }
            for(int i=0;i<z;i++)
                cout<<vect1[i];
            cout<<endl;

        }
        else
        {
            vector<int>vect1,vect2;
        int mini=INT_MAX,mini_index,update_min_index;
        for(int i=0;i<vect.size();i++)
            {
                if(mini>vect[i])
                {
                    mini=vect[i];
                    mini_index=i;
                }

            }
            if(d>vect[0] && d>vect[1])
                cout<<vect[0]<<vect[1]<<endl;
            else if(mini_index==0)
            {
                if(vect[mini_index+1]>=d)
                    vect[mini_index+1]=d;

                    cout<<vect[0]<<vect[1]<<endl;
            }
            if(mini_index==1)
            {
                vect[0]=vect[mini_index];
                cout<<vect[0]<<d<<endl;
               // if()
            }


        }


    }

}
