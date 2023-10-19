//////////////////////////////////////////////////////////////////////////
//
// Accept number from user and display its factors reverse order
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
 
 void FactRev(int iNo)
 {
 	int iCnt=iNo/2;

 	printf("Factors of %d are :\n",iNo);

 	
 	for(iCnt; iCnt>0; iCnt--)
 	{
 		
       if(iNo%iCnt==0)
       {
       	printf("%d\n",iCnt);
       }
            
 	}
 }

int main()
{

	int iValue = 0;

	printf("Enter a number :\n");
	scanf("%d",&iValue);

	FactRev(iValue);

	return 0;
}