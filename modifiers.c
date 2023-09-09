#include <stdio.h>
#include <stdlib.h>
extern int extvar;
int main()
{

    // AUTO modifier will aitomatically gets destroyed after end of scope
    auto int autvar;
    printf("%d",autvar);
   

    //EXTERN modifier is used to acess variable from outside of the file
    
    printf("%d", extvar);
    return 0;

}