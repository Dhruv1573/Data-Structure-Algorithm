#include <stdio.h>

int main()
{
    int i,n;

    scanf("%d",&n);

    int grades[n];

    for(i=0;i<n;i++)
    {
        scanf("%d", &grades[i]);

        if(grades[i]>=38)
        {
            int a = (grades[i]/5)+1;
            int b = a*5;

            if(b-grades[i]<3)

                printf("%d\n",b);
            else
                printf("%d\n",grades[i]);


        }
        else
            printf("%d\n",grades[i]);

    }
    return 0;

}
