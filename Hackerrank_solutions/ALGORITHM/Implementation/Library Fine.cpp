#include <bits/stdc++.h>

using namespace std;


 


int main()
{
    int d1,d2,m1,m2,y1,y2;
    
    scanf("%d%d%d",&d1, &m1, &y1);
    scanf("%d%d%d",&d2, &m2, &y2);
    
    int fine;
    
    if(y1>y2)
    printf("10000");
     
    else if(y2 == y1)
     
     {
        if(m1 > m2)
            printf("%d",(m1-m2)*500);
            else if(m1==m2)
            {
              printf("%d",max((d1-d2)*15,0));
            }
            else
                printf("0");
        }
        else
            printf("0");
    
        

return 0;
}