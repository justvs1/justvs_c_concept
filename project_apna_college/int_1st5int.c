// reading first 5 int from the file
#include <stdio.h>
void createfile()
{   
    FILE *fptr;
    printf("file not found\ncreating the file....\nDONE ");
    fptr=fopen("int1stfive.txt","w");
    fclose(fptr);
}
int main()
{
    FILE *fptr;
    fptr=fopen("int1stfive.txt","r");
    // if(fptr == NULL)
    // {
    //     createfile(fptr);
    // }
    int ch;
    fscanf(fptr,"%d", &ch);
    
    int i=0;
    while (i<5)
    {   
        printf("%d\n",ch);
        fscanf(fptr,"%d", &ch);
        i++;

    }
}