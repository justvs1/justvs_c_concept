#include <stdio.h>
//strong no 
//it is factorial of every no and multiply
int main()
{
    int no, count , q, strngmul=1,remainder, strngplus=0;
    printf("enter the no to search \n");
    scanf ("%d",&no);
    q=no;
    // while(q!=0)
    // {
    //     q=q/10;                  this is not required
    //     count++; 
    // }
    // q=no;
    while(q>0)
    {
        remainder=q%10;
        strngmul=1;     ///////////////////////////////////////this  was wrong here
        ///i did not reset this
        while(remainder>0)
        {
            strngmul=strngmul*remainder;
            remainder--;
        }
        strngplus=strngplus+strngmul;
        q=q/10;
        count--;

    }
    printf("%d\n",strngplus);
    if(no==strngplus)
    {
        printf("%d is a strong no", no);

    }
    else{
        printf("%d is not a strong no", no);
    }
}