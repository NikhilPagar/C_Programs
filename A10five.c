///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                  //
//        Write a program which accept from user and display number in between that range in reverse order         //
//                                                                                                                //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

 void RangeDisplayRev(int iNo1,int iNo2)
 {
    int i=iNo2;
    int iSum = 0;

    for(i; i>=iNo1; i--)
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

	  RangeDisplayRev(iValue1,iValue2);

	 

	return 0;
}