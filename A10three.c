/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                 //
//        Write a program which accept range from user and return addition of all numbers all number in betweeen that range       //
//                                                                                                                                 //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

 int RangeSum(int iNo1,int iNo2)
 {
    int i=iNo1;
    int iSum = 0;

    for(i; i<=iNo2; i++)
    {
    	iSum = i + iSum;
    }
    return iSum;
 }

int main()
{
	int iValue1=0;
	int iValue2=0;
	int iRet = 0;

	printf("Enter Starting point :");
	scanf("%d",&iValue1);

	printf(" Enter Ending point :");
	scanf("%d",&iValue2);

	 iRet = RangeSum(iValue1,iValue2);

	 printf(" Addition is %d\n",iRet);

	return 0;
}