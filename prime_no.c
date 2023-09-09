#include <stdio.h>
#include <math.h>
int main()
{
    int no;
    printf ("enter the no = ");
    scanf("%d", &no);
    int halfs=ceil(sqrt(no));
    if(no==1 || no==2)
    {
         printf("%d is not a prime no .", no);
    }
    else
    {
        for(int i= 2; i<=halfs;i++)
    {
        int remainder=no%i;
        if(remainder==0)
        {
            printf("%d is not a prime no . ", no);
            break;
        }
        
    }
    if (remainder!=0)
    {
        printf("%d is  a prime no ", no);

    }
    
    }
    return 0 ;
}