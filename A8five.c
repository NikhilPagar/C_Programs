///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                      //
//    Write a program which returns difference between even and odd factorial of given number                          //                                                                                                                              //                                                                                                                     //
//                                                                                                                    //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int Efact =1;
    int Ofact = 1;
    if(iNo<0)
    {
    	iNo = -iNo;
    }
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
    	if((iCnt%2)==0)
    	{
           Efact = Efact*iCnt;
    	}
    	else
    	{
            Ofact = Ofact*iCnt;
    	}
    }
    return Efact-Ofact;
}

int main()
{
	int iValue=0;
	int iRet=0;

	printf(" Enter a number :");
	scanf("%d",&iValue);

	iRet = FactorialDiff(iValue);

	printf(" Factorial Difference is %d\n",iRet);

	return 0;
}