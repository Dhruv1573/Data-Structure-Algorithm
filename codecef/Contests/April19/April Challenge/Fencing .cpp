#include<bits/stdc++.h>

using namespace std;
int main()
{

    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        unordered_map<string,bool>umap;
        vector<pair<int, int> >vect;
        int n,m,k,r,c;
        cin>>n>>m>>k;
       /* int arr[n+3][m+3]={0};


        for(int p=0;p<k;p++)
        {
            cin>>r>>c;
            arr[r+1][c+1]=1;
        }
        int count=0;
        for(int j=1;j<=n+2;j++)
            {
                for(int l=1;l<=m+2;l++)
                {
                    //if(j==r and k==c)
                    //arr[j][k]=1;
                   // cout<<arr[j][l]<<" ";
                    if(arr[j][l]==1)
                    {
                        if(arr[j-1][l]==0)
                            count++;
                        if(arr[j][l-1]==0)
                            count++;
                        if(arr[j+1][l]==0)
                            count++;
                        if(arr[j][l+1]==0)
                            count++;

                    }

                       // cout<<j<<" "<<l<<endl;

                }
        //        cout<<endl;

            }
        cout<<count<<endl;
        */
        for(int i=0;i<k;i++)
        {
            int r,c;
            cin>>r>>c;
            vect.push_back(make_pair(r,c));
            string str="";
            string str1=to_string(r);
            string str2=to_string(c);
            str=str1+'n'+str2;
            umap[str]=true;

        }
        long count=0;
        for(int i=0;i<k;i++)
        {
            int p=vect[i].first;
            int q=vect[i].second;
            string s1,s2,s3;
            s2=to_string(p-1);
            s3=to_string(q);
            s1=s2+'n'+s3;
            if(umap[s1]==false)
            {
                count++;
            }
            s2=to_string(p+1);
            s3=to_string(q);
            s1=s2+'n'+s3;
            if(umap[s1]==false)
            {
                count++;
            }
            s2=to_string(p);
            s3=to_string(q-1);
            s1=s2+'n'+s3;
            if(umap[s1]==false)
            {
                count++;
            }
            s2=to_string(p);
            s3=to_string(q+1);
           s1=s2+'n'+s3;
            if(umap[s1]==false)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
}
