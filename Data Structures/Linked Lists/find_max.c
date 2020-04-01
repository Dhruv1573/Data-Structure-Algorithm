#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;

}*first=NULL;

void create(int a[],int n)
{
    struct Node *t,*last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=a[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
/*
void display(struct Node *p)
{
     while(p!=NULL)
           {
               printf("%d  ",p->data);
               p=p->next;
           }
}
*/
int find_max(struct Node *p)
{
    int max1=0;
    while(p!=NULL)
    {
        if(p->data>max1)
            max1=p->data;
        p=p->next;
    }
    return max1;
}
int main()
{
    int a[]={3,5,7,10,15};
    create(a,5);
    printf("\n%d",find_max(first));
}

v
