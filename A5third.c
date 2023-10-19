/////////////////////////////////////////////////////////////////////////////////
//
// Write a program which accept two number & check weather numbers are equal or not 
//
///////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
typedef int BOOL;
#define true 1
#define false 0
 
 BOOL CheckEqual(int ino1,int ino2)
 {
 	if(ino1==ino2)
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
	int iValue1 = 0;
	int iValue2 = 0;
	BOOL bRet = false;

	printf("Enter two numbers :");
	scanf("%d%d",&iValue1,&iValue2);

	bRet = CheckEqual(iValue1,iValue2);

	if(bRet==true)
	{
		printf("Equal");
	}
	else
	{
		printf(" Not Equal");
	}

	return 0;
}