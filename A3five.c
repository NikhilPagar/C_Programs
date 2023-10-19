#include<stdio.h>
typedef int BOOL;
#define true 1
#define false 0


 
 BOOL CheckVowel(char Ch)
 {
     if(Ch=='A'||Ch=='E'||Ch=='I'||Ch=='O'||Ch=='U' ||Ch=='a'||Ch=='e'||Ch=='i'||Ch=='o'||Ch=='u')
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

    char cValue ='\0';
    BOOL bRet = false;

    printf("Enter a character :\n");
    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);

    if(bRet==true)
    {
    	printf(" It is vowel\n");
    }
    else
    {
    	printf("It is not vowel\n ");
    }

    return 0;
}