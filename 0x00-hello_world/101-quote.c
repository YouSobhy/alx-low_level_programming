#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* @filedes: the file to be checked
* @buf: buf
* @nbyte: number of bytes
* Return: Always 1 (Success)
*/
int write(int filedes, const char *buf, unsigned int nbyte);
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
