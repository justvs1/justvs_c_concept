// #include <stdio.h>
// int main()
// {   
//     short shortvar=4;
//     int intvar=4;
//     float floatvar=4.00;
//     long longvar=4;
//     char charvar=4;
//     long double lngdblvar=4;
//     double doublevar=4;


//     printf("sizeof the short int = %d byte ex %d \n", sizeof(short), shortvar);
//     printf("sizeof the  int = %d bytes  ex %d\n", sizeof(int), intvar);
//     printf("sizeof the double = %d byte ex %d\n" , sizeof(double), doublevar  );
//     printf("sizeof the long double  = %d byte ex %d\n ", sizeof(long double),lngdblvar);
//     printf("size of float = %d byte ex %d \n", sizeof(float), floatvar);
//     printf("size of chracter = %d bytes ex %d\n " ,sizeof(char), charvar);
//     return 0;

// }

#include <stdio.h>

int main() {
    short shortvar = 4;
    int intvar = 4;
    float floatvar = 4.00;
    long longvar = 4;
    char charvar = 4;
    long double lngdblvar = 4;
    double doublevar = 4;

    printf("sizeof the short int = %d byte ex %d\n", sizeof(short), shortvar);
    printf("sizeof the int = %d bytes ex %d\n", sizeof(int), intvar);
    printf("sizeof the double = %d byte ex %f\n", sizeof(double), doublevar);
    printf("sizeof the long double = %d byte ex %Lf\n", sizeof(long double), lngdblvar);
    printf("size of float = %d byte ex %f\n", sizeof(float), floatvar);
    printf("size of character = %d bytes ex %c\n", sizeof(char), charvar);

    return 0;
}
