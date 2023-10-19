#include<stdio.h>

void Pattern(int ino)
{
	 int iCnt = 0;

	for(iCnt=0; iCnt<=ino; iCnt++)
	{
		printf("  $    * ");
	}
}

int main()
{
    int iValue = 0;

    printf(" Enter a number  :");
    scanf("%d",&iValue);

    Pattern(iValue);

	return 0;
}