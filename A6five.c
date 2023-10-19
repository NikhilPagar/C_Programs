//////////////////////////////////////////////////////////////////////////////////////////////
//
// Write a program which accept n numbers and print first 5 multiple
//
/////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void MultipleDisplay(int ino)
{
	int temp=0;
	int iCnt =0;
	for(iCnt=1; iCnt<=5; iCnt++)
	{
         temp=iCnt*ino;

         printf("| %d |",temp);
	}

}

int main()
{
   int iValue = 0;

   printf(" Enter a number :");
   scanf("%d",&iValue);

   MultipleDisplay(iValue);

	return 0;
}