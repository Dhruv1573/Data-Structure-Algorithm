#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int days = 215; 

void solve(int year)
{
    int febdays;
    if(year<=1917) 
        
        if(year%4 == 0)
            febdays=29;
        else
            febdays=28;
    else if(year == 1918)
        febdays=15;
    else
    {
        if((year%400 == 0)|| (year%4 == 0)&&(year%100 !=0))
            febdays=29;
        else
            febdays=28;
    }
    printf("%d.09.%d",256-(febdays+days),year);
}

int main() {
    int year; 
    scanf("%d", &year);
    solve(year);
    return 0;
}