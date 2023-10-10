///////////////////////////////////////////////////////////////
//
//Accept one number from user if no. is less than 10 then print "hello" other wis print "demo"
//
///////////////////////////////////////////////////////////////
#include<stdio.h>

 void Display(int ino)
 {
 	if(ino<10)
 	{
 		printf("Hello");
 	}
 	else
 	{
 		printf("Demo"); 
 	}
 }

 int main()
 {
 	int ivalue=0;

 	printf("Enter number :\n");
 	scanf("%d",&ivalue);

 	Display(ivalue);
 	return 0;
 }