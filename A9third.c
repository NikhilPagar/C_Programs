///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                      //
// Write a program which accept distance in kilometer and convert in to meter (1km = 1000 meter)                       //
//                                                                                                                    //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

 int KmtoMeter(int iNo)
 {
     iNo = iNo*1000;
     
     return iNo;
 }

int main()
{

	int iValue = 0;
	int iRet= 0;

	printf(" Enter a distance :");
	scanf("%d",&iValue);

	iRet = KmtoMeter(iValue);

	printf(" Distance in Meter is %d\n",iRet);

	return 0;

}