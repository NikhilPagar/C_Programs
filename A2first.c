///////////////////////////////////////////////////////////////////////
//
//Accept one number from user and print that number * on screen
//
////////////////////////////////////////////////////////////////////
#include<stdio.h>

 void Display(int ino1)
 {
 	int icnt =0;

 	for(icnt=0;icnt<ino1;icnt++)
 	{

      printf(" * ");

 	}
 }

int main()
{
	int ivalue= 0;

	printf("Enter number :\n");
	scanf("%d",&ivalue);

	 Display(ivalue);

	 return 0;
}
