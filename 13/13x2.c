#include <stdio.h>
#include <string.h>
/**
  * main - count the length of the string
  * Return: Always 0
  */

int main(void)
{
	char str[] = "This is a really happy situation.";
	int i, len;

	len = 0;
	for (i = 0; str[i] != '\0'; i++)
		len++;
	printf("The length of the string is %d", len);
}
