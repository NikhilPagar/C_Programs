#include<stdio.h>

void DisplayConvert(char cValue)
{
	int no =0;
	if('A'||'B'||'C'||'D'||'E'||'F'||'G'||'H'||'I'||'J'||'K'||'L'||'M'||'N'||'O'||'P'||'Q'||'R'||'S'||'T'||'U'||'V'||'W'||'X'||'Y'||'Z')
	{
		no=cValue+32;
	}
	if('a'||'b'||'c'||'d'||'e'||'f'||'g'||'h'||'i'||'j'||'k'||'l'||'m'||'n'||'o'||'p'||'q'||'r'||'s'||'t'||'u'||'v'||'w'||'x'||'y'||'z')
	{
		no=cValue-32;
	}
	printf("%c",no);
}
int main()
{

	char cValue = '\0';

	printf("Enter a character :\n");
	scanf("%c",&cValue);

	DisplayConvert(cValue);

	return 0;
    
}