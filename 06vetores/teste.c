teste.c
#include <stdio.h>

int tam(char* p)
{
	int n = 0;
	/*
	for (; *(p+n) != '\0'; n++)
		;
	
	for (int i = 0; *(p+i) != '\0'; i++)
		n++;

	*/

	while (*p != 0){
		printf("%c\n",*p);
		p++;n++;
	}

	return n;
}

int main(void)
{
	char s[] = "ola";
	printf(">>> %d\n",tam(s));
	return 0;
}
