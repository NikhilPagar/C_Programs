#include<stdio.h>
 
 void NonFact(int iNo)
 {
    
    int iCnt=1;

 	printf("Factors of %d are :\n",iNo);

 	
 	for(iCnt; iCnt<iNo; iCnt++)
 	{
 		
       if(iNo%iCnt==0)
       {
       	
       }
       else
       {

         printf("%d\n",iCnt);     
 	   }
   
 }
       }

int main()
{

	int iValue =0;

	printf("Enter a number :\n");
	scanf("%d",&iValue);

	NonFact(iValue);

	return 0;
}