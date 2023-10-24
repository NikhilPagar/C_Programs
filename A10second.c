///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                      //
//        Write a program which accept range from user and display all even number in betweeen that range              //
//                                                                                                                    //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

 void RangeDisplayEven(int iNo1,int iNo2)
 {
    int i=iNo1;
    for(i; i<=iNo2; i++)
    {
    	if((i%2)==0)
    	{
    		printf(" %d ",i);
    	}
    	
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

	RangeDisplayEven(iValue1,iValue2);

	return 0;
}