#include <iostream>
using namespace std;

int main()
{
    int i,n,up=0,result=0; 
    cin>>n;
    
        char ud[n];
        
        
        for(int i=0; i<n; ++i)
        {
            cin>>ud[i]; 
            
            if(ud[i]=='U')
                ++up;
            
            if(ud[i]=='D')
                --up;
            
            if(up==0 && ud[i]=='U')
                ++result;
        }
    cout<<result<<endl;
    
    return 0;
}