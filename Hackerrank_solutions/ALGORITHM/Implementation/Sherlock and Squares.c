#include<stdio.h>
int main() {

int t;
scanf("%d",&t);


for(int i = 0; i < t; i++)
{
    int a;
    int b;
    int count = 0;
    scanf("%d%d",&a,&b);
    int r;

    for(r = a; r <=b; ++r)
    
    {


       int d = sqrt(r);

        if(d*d == r)

        {

            count++;
            r += d*2 ;
        }



    }


    printf("%d\n",count);
}


return 0;
}