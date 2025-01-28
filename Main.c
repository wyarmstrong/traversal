#include <stdio.h>

int SumTwoIntegers(int x, int y)
{
	return(x + y);
}

int main(int argc, char* argv[])
{
	printf("Arguments: %i\n", argc);

	if (argc > 1)
	{
		printf("- First Argument: %s\n", argv[1]);
	}

	if (argc == 3)
	{
		printf(" - SUM : %i\n", SumTwoIntegers(argv[1], argv[2]));
	}

	return(0);
}