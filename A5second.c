///////////////////////////////////////////////////////////////////////////
//
// Write a program which accept one number from user & check weather that number is greater than 100 or not
//
///////////////////////////////////////////////////////////////////////
#include<stdio.h>
typedef int BOOL;
#define true 1
#define false 0


BOOL CheckGreater(int ino)
{
	 int iCnt =100;
	 
	if(ino>iCnt)
	{
		 return true;
	}
	else
	{
		 return false;
	}
}

int main()
{
	int iValue=0;
	BOOL bRet= false;

	printf("Enter a number : ");
	scanf("%d",& iValue);

	bRet = CheckGreater(iValue);

	if(bRet==true)
	{
		printf("Greater");
	}
    else
    {
    	printf("Smaller");
    }

     return 0;

}