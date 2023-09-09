#include <stdio.h>
#include <string.h>
int main()
{
    FILE *file;
    file=fopen("student_info.txt","a");
    // typedef struct student_info
    // {
    //     int roll;
    //     char name[100];
    //     int class;
    // }std;

    // std info[10];
    // int i=0;
    // while(1)
    // {                                                it can also be used 
    //     int cont;
    //     printf("do you to enter the record \n");
    //     scanf("%d", &cont);
    //     if (cont==1)
    //     {
    //         scanf("%d", &info[i].roll);
    //         char name[100];
    //         scanf("%c",&name);
    //         strcpy(info[i].name,name);
    //         scanf("%d", &info[i].class);
    //         fprintf(file,"RollNo. = %d\n");
    //     }
    //     else{
    //         break;

    //     }
    //     i++;
    // }

    int i=0;

    while (1)
    {
        int choice;
        printf("do you want to update the record :- ");
        scanf("%d", &choice);
        
        if (choice==0)
        {
            break;
        }   
        else
        {
            printf("record %d : \n",i);
            int roll, class;
            char name[100];

            printf("Enter the roll :-  ");
            scanf("%d", &roll);
            fprintf(file,"Roll = %d\n",roll);

            printf("Enter the name :-  ");
            scanf("%s", &name);
            fprintf(file,"Name = %s\n",name);

            printf("Enter the class :-  ");
            scanf("%d", &class);
            fprintf(file,"class = %d\n",class);


        }
        i++;
    }
}