///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                      //
//               Write a program accept number frm user & display its table in reverse                                 //                                                                                                                              //                                                                                                                     //
//                                                                                                                    //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void TableRev(int iNo)
{
   int iCnt = 0;
   int iTemp=1;

   for(iCnt=10; iCnt>0; iCnt--)
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

    TableRev(iValue);

    return 0;
}