#include <stdio.h>
int main()
{
    int i=1 , count = 1 , rows, j;
    printf("enter the no of you want :-  ");
    scanf("%d",&rows);
    while(i <=rows)
    {
        j=0;
        for(j; j<i; j++)
        {
            printf("%d ", count);
            count++;

        }
        printf("\n");
        i++;
    }
    return 0;
}