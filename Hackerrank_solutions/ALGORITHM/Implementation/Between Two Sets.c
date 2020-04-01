#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main() {
    int n,t,flag,j,total=0,i;
    int m;
    scanf("%i %i", &n, &m);
    int a[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%i",&a[i]);
    }
    int b[m];
    for (int i = 0; i < m; i++) 
    {
       scanf("%i",&b[i]);
    }
    for(t=a[n-1];t<=b[0];t++)
    {
        flag=0;
        for(i=0;i<n;i++)
            if(t%a[i] !=0)
            {
                flag=1;
                break;
            }
        if(flag == 0)
        {
            for(j=0;j<m;j++)
            if(b[j]%t !=0)
            {
                flag=1;
                break;
            }
        }
        if(flag == 0)
            total++;
    }
    printf("%d\n", total);
    return 0;
}