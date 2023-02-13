#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{
	float inches = atoi(argv[1]) / 2.54;
	printf("%.2f\n", inches);

	return 0;
}
