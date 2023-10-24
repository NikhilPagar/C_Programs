///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                      //
//        Write a program which accept range from user and display all number in betweeen that range                   //
//                                                                                                                    //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

 void RangeDisplay(int iNo1,int iNo2)
 {
 	int i=iNo1;
    for(i; i<=iNo2; i++)
    {
    	printf(" %d ",i);
    }
 }

int main()
{
	int iValue1=0;
	int iValue2=0;

	printf("Enter Starting point :");
	scanf("%d",&iValue1);

	printf(" Enter Ending point :");
	scanf("%d",&iValue2);

	RangeDisplay(iValue1,iValue2);

	return 0;
}