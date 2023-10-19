
#include<stdio.h> 

 int MultiFactor(int iNo)
 {
   auto int iSum = 1;
   auto int iCnt=0;

   

   for(iCnt =1; iCnt<=(iNo/2); iCnt++)
   {
       if ((iNo % iCnt)==0)
       {
         iSum = iSum * iCnt;

         }
   }

   return iSum; 
 }


int main()
{
  auto int iValue = 0;
   auto int iRet = 0;

   printf(" Enter the number :\n");
   scanf("%d",&iValue);

   iRet= MultiFactor(iValue);

  printf("Multiplication of factors are :%d\n",iRet);

	return 0;
}

// time complexity : O(N/2)