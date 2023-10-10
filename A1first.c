
/////////////////////////////////////////////////////////////////
// Program to divivde two numbers
//
////////////////////////////////////////////////////////////////
#include<stdio.h>

int Divide(int ino1,int ino2)
{
	int iAns = 0;
	if(ino2>ino1)
	{
		return -1;
	}
	iAns=ino1/ino2;
	return iAns;
}
int main()
{
   int ivalue1 = 5;
   int ivalue2 = 15;
   int iRet = 0;

   iRet = Divide(ivalue1,ivalue2);


   printf("division is %d\n",iRet);
   return 0;

}