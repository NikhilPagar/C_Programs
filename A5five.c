////////////////////////////////////////////////////////////////////////////////////////////
//
// Write a program which accept total marks and obtained marks from user and calculate percentage.
//
///////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

float Percentage(int imarks,int itotal)
{
	float fpercentage =0.0f;

	fpercentage = (((float) itotal / (float)imarks)*100);

	return fpercentage;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    float fRet = 0.0f;

    printf(" Enter total marks :");
    scanf("%d",&iValue1);

    printf(" Enter obtained marks :");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf(" Percentage is %f\n",fRet);

	return 0;
}
