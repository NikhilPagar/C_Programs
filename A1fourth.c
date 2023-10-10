/////////////////////////////////////////////////////////////////
//
//Accept one number and check whether it is divisible by 5
//
///////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

bool Check(int ino)
{
	if(ino % 5==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int ivalue = 0;
	bool bRet = false;

	printf("Enter number :\n");
	scanf("%d",&ivalue);

	bRet = Check(ivalue);
	if(bRet == true)
	{
		printf(" %d is  divisible by 5  :\n",ivalue);
	}
	else
	{
		printf(" %d is not divisible by 5 :\n",ivalue);
	}
return 0;
}