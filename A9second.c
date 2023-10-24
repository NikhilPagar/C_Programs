///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                      //
// Write a program which accept width and height of rectangle from user and calculate its area(area = width * height)  //
//                                                                                                                    //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
double RectArea(float fwidth, float fheight)
{
     float fArea = 0.0f;
     

     fArea = fwidth*fheight; 

     return fArea;
}

int main()
{
	 float fValue1 = 0.0f;
	 float fValue2 = 0.0f;
	 double dRet = 0.0;

	 printf(" Enter Width :");
	 scanf("%f",&fValue1);

	 printf(" Enter Height :");
	 scanf("%f",&fValue2);

	 dRet =RectArea(fValue1,fValue2);

	 printf(" Area is %f\n",dRet);

	 return 0;
}