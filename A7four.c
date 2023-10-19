///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                      //
//               Write a program accept number frm user & display its table                                            //                                                                                                                              //                                                                                                                     //
//                                                                                                                    //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Table(int iNo)
{
   int iCnt = 0;
   int iTemp=1;

   for(iCnt=1; iCnt<=10; iCnt++)
   {
    iTemp = iNo*iCnt;
    
    printf("  %d ",iTemp);
   }
}

int main()
{
    int iValue=0;
    printf(" Enter a number :");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}