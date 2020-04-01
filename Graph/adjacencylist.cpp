 //Method 1.
#include<bits/stdc++.h>


using namespace std;


int main()
{

    int n,e;
    cin>>n>>e;

    vector<int> vect[n];

    int u,v;
    for(int i=0;i<e;i++)
    {
        cin>>u>>v;

      //  addEdge(u,v);
       vect[u].push_back(v);
        vect[v].push_back(u);
    }
/*
    void addEdge(vector<int>vect,int u,int v)
    {
         vect[u].push_back(v);
        vect[v].push_back(u)
    }
*/
        vector<int>::iterator it;
        for(int i=1;i<n;i++)
        {
            cout<<"Adjacency list of "<<i<<" "<<endl;

            for(it=vect[i].begin();it!=vect[i].end();it++)
            {

                cout<<*it<<" "<<endl;


            }

        }


}


//Method 2
/*
 #include<bits/stdc++.h>
     //#include < vector >

    using namespace std;

    vector <int> adj[10];

    int main()
    {
        int x, y, nodes, edges;
        cin >> nodes;       //Number of nodes
        cin >> edges;       //Number of edges
        for(int i = 0;i < edges;++i)
        {
                cin >> x >> y;
            adj[x].push_back(y);        //Insert y in adjacency list of x
         }
    for(int i = 1;i <= nodes;++i)
    {
            cout << "Adjacency list of node " << i << ": ";
        for(int j = 0;j < adj[i].size();++j)
            {
            if(j == adj[i].size() - 1)
                    cout << adj[i][j] << endl;
            else
                cout << adj[i][j] << " --> ";
    }
    }
    return 0;
    }
*/
