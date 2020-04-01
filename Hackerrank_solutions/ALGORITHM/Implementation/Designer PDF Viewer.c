#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main()
{
    int h[26];
    
    for(int i=0;i<26;i++)
    {
        
       scanf("%d",&h[i]);
        
    }
    
    char* word = (char *)malloc(512000 * sizeof(char));
    
    scanf("%s",word);
    
    int len=strlen(word);
    
    if(len==0)
        exit(0);
    int temp=h[word[0]-97];
    
    for(int j=1;j<len;j++)
        {
        if(temp<h[word[j]-97])
            temp=h[word[j]-97];
    }
    printf("%d",temp*len);
    return 0;
}