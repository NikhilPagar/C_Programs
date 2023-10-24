///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                      //
// Write a program which accept temprature in  farenhit and convert in to celcius (1 celcius =( farenhit-32*(5/9))     //
//                                                                                                                    //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

 float FnToCs( int iTemp)
 {
 	iTemp-=32;
 	 
 	float fCelcius =0.0f ;
    

    fCelcius = iTemp * 0.5555555555555; 
    

    return fCelcius;
 }

int main()
{

	int iValue = 0;
	double dRet = 0.0;

	printf(" Enter temprature in farenhit :");
	scanf(" %d",&iValue);

	dRet = FnToCs(iValue);

	printf(" Temprature in Celcius is %f\n",dRet);

	return 0;
}