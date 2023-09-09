#include <stdio.h>
int main()
{
    int a=0;
    int b=1;
    int result , rows=5;
    for (int i=0; i<rows ; i++)
    {
        result=a+b;
        printf("%d \n", result);
        a=b;
        b=result;
    }

    return 0;
}