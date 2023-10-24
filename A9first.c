////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Write a program which accept radius of circle from user and calculate its area consider value as 3.14 ( area = PI*r*r) 
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#define PI 3.14
double CircleArea(float fRadius)
{
     float fArea = 0.0f;
     

     fArea = PI *fRadius*fRadius; 

     return fArea;
}

int main()
{
	 float fValue = 0.0f;
	 double dRet = 0.0;

	 printf(" Enter Radius :");
	 scanf("%f",&fValue);

	 dRet =CircleArea(fValue);

	 printf(" Area is %f\n",dRet);

	 return 0;
}