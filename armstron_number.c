#include <stdio.h>
int main()
{
    int count=0, q , no;
    printf("enter the no = ");
    scanf("%d", &no);
    q=no;
    while(q!=0)
    {
        q=q/10;
        count++;
    }
    q=no;
    int remainder , remainmul=1 , remainplus;
    while (q!=0)
    {
        remainder=q%10;
        remainmul=1;
        for(int i=0;i<count; i++)
        {
            remainmul=remainmul*remainder;
        }
        remainplus=remainplus+ remainmul; 

    }
    if (remainplus==no)
    {
        printf("%d is a armstrong no",no );

    }
    else
        printf("%d is not a armstrong no",no );

}