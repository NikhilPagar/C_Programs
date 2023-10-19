//////////////////////////////////////////////////////////////////////////////////////////////
//
// Write a program which accept number from user and print its  number line
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int ino)
{
	 int iCnt = 1;

	for(iCnt=-ino; iCnt<=ino; iCnt++)
	{
		printf(" %d\n",iCnt);
	}
}

int main()
{
    int iValue = 0;

    printf(" Enter a number  :");
    scanf("%d",&iValue);

    Display(iValue);

	return 0;
}