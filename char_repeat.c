#include <stdio.h>
int main()
{
    int no ,len , rem;
    printf ("enter the no to search ");
    scanf("%d", &no);
    // int length=return printf("192459");
    // printf("%d ", length);
    int arr[10]={0};
    while(no>0){
        rem=no%10;
        arr[rem]=arr[rem]+1;
        printf("hello");
        if (arr[rem]>=2)
        {
            printf("yes");
        }
        no = no/10;


    }
    printf("%d",arr[2]);

   
    
}