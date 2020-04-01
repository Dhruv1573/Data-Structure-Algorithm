
#include <stdio.h>

int main(){
    int s;
    int t,count1=0,count2=0;
    scanf("%d %d",&s,&t);
    int a;
    int b;
    scanf("%d %d",&a,&b);
    int m;
    int n;
    scanf("%d %d",&m,&n);
    int temp;
    
    
    for(int i = 0; i < m; i++){
       scanf("%d",&temp);
        if(temp+a>=s && temp+a<=t)
            {
            count1++;
        }
    }
    for(int j = 0; j < n; j++){
        scanf("%d",&temp);
        if(temp+b>=s && temp+b<=t)
            {
            count2++;
        }
    }
    printf("%d\n%d",count1,count2);
   
    return 0;
}