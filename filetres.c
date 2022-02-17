#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc != 3)
		printf("This program takes 2 arguements\n");
	if (argc == 3)
	{
		printf("Well done\n");
		printf("There was a small purpose to this\n");
	}	
	return (0);
}	
