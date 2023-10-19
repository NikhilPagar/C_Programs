//////////////////////////////////////////////////////////////////////////////////////////////////
//
// Write a program which accept three numbers from user and prinht its multiplications  
//
//////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

 int Multiply(int ino1,int ino2,int ino3)
 {
 	int iTotal = 0;

 	iTotal =(ino1*ino2*ino3);

 	return iTotal;
 }
int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	int iValue3 = 0;
	int iRet = 0;

	printf(" Enter three numbers :");
	scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

	iRet = Multiply(iValue1,iValue2,iValue3);

	printf(" Multiplication is %d\n",iRet);

	return 0;
}