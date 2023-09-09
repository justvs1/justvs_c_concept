# include<stdio.h>
# include<stdlib.h>

void fun(int **a)
{
	*a = (int*)malloc(sizeof(int)); 
}

int main()
{
    // As no MEMORY is allocated to the ptr 
    // therefore when we try to alloctate the value to the ptr causes undedefined error
	int *p;
    *p=0;
	fun(&p);
	*p = 6;
	printf("%d\n",*p);
	
	getchar();
	return(0);
}
