#include<stdio.h>

 void Number(int ino)
 {
 	if(ino<=50)
 	{
 		printf("Small\n");
 	}
 	else if((ino>50)&&(ino<=100))
 	{
 		printf("Medium\n");
 	}
 	else if(ino>100)
 	{
 		printf("Large\n");
 	}
 }

int main()
{
      int iValue=0;

      printf("Enter a number :");
      scanf("%d",&iValue);

      Number(iValue);

	return 0;
}