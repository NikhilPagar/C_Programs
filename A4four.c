///////////////////////////////////////////////////////////////////////////////////////
//
// Accept number from user and display non factors addition
//
////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
 
 int  SumNonFact(int iNo)
 {
    
    int iCnt=1;
    int iSum = 0;

   printf("Factors of %d are :\n",iNo);

   
   for(iCnt; iCnt<iNo; iCnt++)
   {
      
       if(iNo%iCnt==0)
       {
        
       }
       else
       {

         iSum = iSum + iCnt;     
      }
   
 }
        return iSum;
       }

int main()
{

   int iValue =0;
   int iRet = 0;

   printf("Enter a number :\n");
   scanf("%d",&iValue);

   iRet = SumNonFact(iValue);

   printf(" %d ",iRet);

   return 0;
}