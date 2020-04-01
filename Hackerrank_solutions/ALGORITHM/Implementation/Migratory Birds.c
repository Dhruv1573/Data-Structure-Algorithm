#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int birds(int n, int* ar) {
   int a[5]={0},j;
    for(int i=0;i<n;i++)
        a[ar[i]]++;
    int m=0;
    for(int i=1;i<=5;i++)
        if(m<a[i])
        {
            m=a[i];
            j=i;
        }
    return j;
}
int main() {
    int n; 
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = birds(n, ar);
    printf("%d\n", result);
    return 0;
}
