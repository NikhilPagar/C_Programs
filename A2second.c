/////////////////////////////////////////////////////////////////////
//
// Accept one number from user and print that no. * on screen using while loop
//
/////////////////////////////////////////////////////////////////////////
#include<stdio.h>

 void Display(int ino)
 {
 	while(ino!=0)
 	{
 		printf(" * ");
 		ino--;
 	}

 }

  int main()
  {
  	int ivalue = 0;
  	printf("Enter Number :\n");
  	scanf("%d",&ivalue);

  	Display(ivalue);
  	return 0;
  }
