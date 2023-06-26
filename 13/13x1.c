#include <stdio.h>
/**
  * main - copies str1 to str 2
  *
  * Return: Always 0
  */

int main(void)
{
	char str2[20];
	int i;
	char str1[] = "This is Exercise 1.";

	for (i = 0; str1[i] != '\0'; i++)
		str2[i] = str1[i];
	str2[i+1] = '\0';
	printf("%s", str2);
}
