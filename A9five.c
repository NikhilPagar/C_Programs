///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                      //
// Write a program which accept area in square feet and convert in to square meter(1 sq.ft = 0.0929 sq.mt)     //
//                                                                                                                    //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

 double SquareMeter(int iValue)
 {
    iValue= iValue*0.0929;
    
    return iValue;

 }

int main()
{
	int iValue =0;
	double dRet = 0.0;

	printf("Enter area in square feet :");
	scanf("%d",&iValue);

	dRet = SquareMeter(iValue);

	printf(" Area in square meter is %d\n",dRet);

	return 0;
}