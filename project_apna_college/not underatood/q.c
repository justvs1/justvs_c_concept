#include<stdio.h>
int main()
{
printf("%x", -1<<1);
getchar();
return 0;
}

#####################################3

char *getString()
{
char *str = "Nice test for strings";  //string constdata stored in data section
                                    // therefore data not deleted
return str;
}

int main()
{
printf("%s", getString());
getchar();
return 0;
}
// BUT IF 
char *str[]= "Nice test for strings";   //this will get deketed 
// /therefore garbagevalue


######################################################

#include<stdio.h>
int main()
{
	static int i=5;
	if(--i){                ////
		main();
		printf("%d ",i);
	}
}

######################################################

#include <stdio.h>
int main()
{
printf("%p", main);    //prints adress of main
getchar();
return 0;
}
######################################################

int main()
{
char arr[] = "geeksforgeeks";
char *ptr = arr;

while(*ptr != '\0')
	++*ptr++;
printf("%s %s", arr, ptr);

getchar();
return 0;
}

####################################################################

#include <stdio.h>

void fun(const char **p) { }

int main(int argc, char **argv) {
    fun(argv);
    getchar();
    return 0;
}




