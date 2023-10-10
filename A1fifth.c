//////////////////////////////////////////////////////////////////////////////
//
// accept one from user and print that no  of times * on screen
//
//
///////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

 void Accept(int ino)
 {
 	int icnt = 0;
 	for(icnt=0;icnt<5;icnt++)
 	{
 		printf("  *  ");
 	}
 }
int main()
{
	int ivalue =0;
	ivalue=5;

	Accept(ivalue);
	return 0;
}