#include <stdio.h>
int main()
{
    int count =0 , q , no ;
    printf("enter the no to search \n");
    scanf ("%d",&no);
    q=no;
    while (q!=0)
    {
        q=q/10;
        count++;

    }
    printf("orderof the no = %d\n ",count);
    q=no;
    int remainder, new =0 ;
    while (count!=0)
    {
        remainder=q%10;
        new=new*10+remainder;
        q=q/10;
        count--;
    }
    if (new==no)
    {
        printf("the no %d is a palindrome\n ",no);

    }
    else
    {
        printf("the no %d is not a palindrome ", no);
    }

    
}