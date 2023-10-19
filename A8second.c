///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                      //
//   Accept amount in US dollar & return its corresponding value in indian currency consider 1$ as 70 rupees           //                                                                                                                              //                                                                                                                     //
//                                                                                                                    //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
 
 int DollarToInr(int iNo)
 {
 	iNo=iNo*70;
 	return iNo;
 }
int main()
{
	int iValue=0;
	int iRet = 0;

	printf("Enter the USD amount  :");
	scanf("%d",&iValue);

	iRet = DollarToInr(iValue);

	printf("Value of INR is %d\n",iRet);

	return 0;
}