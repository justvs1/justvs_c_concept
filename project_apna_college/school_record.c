#include <stdio.h>
#include <string.h>

typedef struct students_data 
  {
    int roll;
    char name[100];
    int cgp;
    char teacher[100];
    }students;
students std[20];

int update_file()
{   
    int choice ;
    printf("enter the no of records you need to update :\n");
    scanf("%d",&choice );

    
    FILE *records;
    records=fopen("records.txt","a");
    int i = 0; //no need for static
    while(i< choice)
    {   //roll
        printf("enter the roll\n ");
        scanf(" %d", &std[i].roll);   //fuck forgot to add & operator
        printf("enter the cgp\n ");
        scanf(" %d",&std[i].cgp);
         printf("enter the Name : \n ");
            //for teacher and name 
        char name[100] , teacher[100];
        scanf(" %s", &name);
        strcpy(std[i].name,name);

         printf("enter the teacher's first name : \n ");
        scanf(" %s", &teacher); 
        strcpy(std[i].teacher, teacher); 
        printf("saved the data in file............\n");

        // #######################################################################

        fprintf(records,"id = %d\n", i);
        fprintf(records,"name  = %s\n", std[i].name);
        fprintf(records,"Roll no : %d\n",std[i].roll);
        fprintf(records,"CGP = %d \n", std[i].cgp);
        fprintf(records,"Teacher's name  = %s\n", std[i].teacher);
        
        fprintf(records, "\n\n");
        i++;

    }   
}

int read_file()
{
    
}
int main()
{

    // students std[20];
   
   
    // update_file();
    



}