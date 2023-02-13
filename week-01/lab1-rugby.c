#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{
	int try = atoi(argv[1]) * 5;
	int conv = atoi(argv[2]) * 2;
	int pen = atoi(argv[3]) * 3;
	int drop = atoi(argv[4]) * 3;

	int points = try + conv + pen + drop;
	printf("%d\n", points);

	return 0;
}
