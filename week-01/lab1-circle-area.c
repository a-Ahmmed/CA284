#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415

int main(int argc, char*argv[])
{
	int radius = atoi(argv[1]);
	float area = PI*radius*radius;

	printf("%.2f\n", area);

	return 0;
}
