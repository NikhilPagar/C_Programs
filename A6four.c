////////////////////////////////////////////////////////////////////////////////////////////////
//
// Write a program to accept n numbers from user and print all odd number from n
//
/////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

 void CheckOdd(int ino)
 {
 	int iCnt = 0;

 	for(iCnt=1; iCnt<ino; iCnt++)
 	{
 		if((iCnt%2)!=0)
 		{
         printf(" %d\n",iCnt);
 		}
 	}
 }

int main()
{
    int ivalue=0;
    
    printf("Enter the Number :\n");
    scanf("%d",&ivalue);

    CheckOdd(ivalue);
    
     
     return 0;

}
