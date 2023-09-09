#include <stdio.h>
#include <string.h>
int main()
{
    struct students
    {
        int roll;
        char name[100];
        float cgp;
    };
// // ##################
// // simple way to add data to structure

//     struct students s1;
//     s1.roll=1;
//     strcpy(s1.name,"vaibhav Sharma");
    
//     printf("%d",s1.roll);

// //   ###################################
// //  specifying all at one time 

//     struct students s1={1, "vaibhav sharma", 9.2};
//     printf("name = %d",s1.name); // ??????????????????????? name = 1690302900

// // #################################################
// // using arrays for storing the data of the structure

//     struct students std[5];
//     std[0].roll=1;
//     std[1].roll=2;
//     std[2].roll=3;
//     printf ("%d %d %d",std[0].roll,std[1].roll,std[2].roll);

//giving a nickname to the structure

    typedef struct adress_of_student
    {                                     
        char country[100];              //other method to define the nickname to the struct;
        char locality[100];             //typedef struct adress_of_student adr;
        int pincode;
    } adr; // adr is the nickname
    adr a1;
    a1.pincode=180007;
    printf("%d \n", a1.pincode);

    // ################# pointer and arrow operator
    struct adress_of_students *ptr= &a1;
    printf("%d" ,(*ptr).pincode); //////// SOME PROBLEM HERE!!!!!!!!!!!!!!!!!!!!}
}