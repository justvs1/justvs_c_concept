#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("filetesttxt", "r");

// ################################################################
// TO WRITE THE FILE 

    // fprintf(fptr,"%c",'h');
    // fprintf(fptr,"%c",'e');
    // fprintf(fptr,"%c",'l');     TO WRITE IN THE FILE
    // fprintf(fptr,"%c",'l');
    // fprintf(fptr,"%c",'o');

    //          OR
    // BY USING ( fputc )

    // fputc('a',fptr);
    // fputc('p',fptr);
    // fputc('p',fptr);
    // fputc('l',fptr);
    // fputc('e',fptr);
    
// ################################################################
// TO READ THE FILE 

    // char ch;   //creating the variable 
    // fscanf(fptr,"%c",&ch); // it scans the file pointer and put the char in the variable ch
    // printf("%c",ch);  //   (h)  print the value printed in the variable
    // fscanf(fptr,"%c",&ch);
    // printf("%c",ch);        // e
    // fscanf(fptr,"%c",&ch);
    // printf("%c",ch);        // l
    // fscanf(fptr,"%c",&ch);
    // printf("%c",ch);        // l
    // fscanf(fptr,"%c",&ch);
    // printf("%c",ch);        // o

    // //          OR
    // // BY USING ( fgetc )
    // //fgetc reurns EOF that is Null

    // printf("%c",fgetc(fptr));
    // printf("%c",fgetc(fptr));
    // printf("%c",fgetc(fptr));
    // printf("%c",fgetc(fptr));
    // printf("%c",fgetc(fptr));


    // using end of file EOF
    
    char chs;
    chs=fgetc(fptr);
    while(chs!=NULL)
    {
        printf("%c",chs);
        chs=fgetc(fptr);
    }
    printf("\n");

    fclose(fptr);
}