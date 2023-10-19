#include<stdio.h>

 void PrintEven(int iNo)
 {
 	int iEvenCnt = 0;
    int i=0;

 	if(iNo <= 0)

 	{
 		return;
 	}

 	for(i=2; iEvenCnt<iNo; i++)
    {

        if((i % 2)==0)
        {
          printf(" %d ",i);
           iEvenCnt++;
 	 	}
    }

 	return;
 }

int main()
{
	int iValue =0;

	printf("Enter the  number :\n");
	scanf("%d",&iValue);

	PrintEven(iValue);

	return 0;

}