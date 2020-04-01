#include<stdio.h>

int a[3], b[3];
int alice = 0;
int bob = 0;

int main() {
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 3; i++) 
    {
        scanf("%d", &b[i]);
    }
    for(int i = 0; i < 3; i++) 
    {
        if (a[i] > b[i]) alice++;
        if (a[i] < b[i]) bob++;
    }
    printf("%d %d\n", alice, bob);
    return 0;
}