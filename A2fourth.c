///////////////////////////////////////////////////////
//
//Accedpt two number from user & display first number in second number of times
//
//
#include<stdio.h>

 void Display(int ifrequency,int inum)
 {
 	int i= 0;
 	for(i=0;i<inum;i++)
 	{
 		printf("| %d |",ifrequency);
 	}
 }

int main()
{
	int ivalue;
	int icount;

	printf("Enter first number :\n");
	scanf("%d",&ivalue);

	printf("Enter second number :\n");
	scanf("%d",&icount);

	Display(ivalue,icount);
	return 0;
}
