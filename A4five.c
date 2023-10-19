///////////////////////////////////////////////////////////////////////////////////////
//
// Accept number from user and display differnce of factors addition
//
////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
 
 int  FactDiff(int iNo)
 {
    
    int iCnt=1;
    int iSum = 0;
    int iDiff = 0;
    int ifsum = 0;

   printf("Factors of %d are :\n",iNo);

   
   for(iCnt; iCnt<iNo; iCnt++)
   {
      
       if(iNo%iCnt==0)
       {
         ifsum = ifsum + iCnt;
       }
       else
       {

         iSum = iSum + iCnt;     
      }
        
 }
    iDiff = ifsum-iSum;

        return iDiff;
       }

int main()
{

   int iValue =0;
   int iRet = 0;

   printf("Enter a number :\n");
   scanf("%d",&iValue);

   iRet = FactDiff(iValue);

   printf(" %d ",iRet);

   return 0;
}