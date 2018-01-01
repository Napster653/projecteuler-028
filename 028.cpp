#include <iostream>
#include <stdlib.h>
#include <string>

int main(int argc, char const *argv[])
{
	printf("%d %s\n", argc, argv[0]);

	// unsigned long int spiral [1001][1001] = { };
	unsigned long int spiral [5][5] = { };
	// int x = 500;
	int x = 2;
	// int y = 500;
	int y = 2;

	int moveCount = 0;
	char moveDir = 'E';
	int moveDist = 2;
	unsigned long int num = 1;

	// while (num <= 1002001)
	while (num <= 25)
	{
		spiral[x][y] = num;	// Enter number
		++num;				// Increase number counter
		++moveCount;		// Increase move counter

		if (moveCount == moveDist)	// If last move in a direction
		{
			moveCount = 0;

			switch (moveDir)		// Change direction
			{
				case 'E':	moveDir = 'S';	// East -> South
							break;
				case 'S':	moveDir = 'W';	// South -> West
							++moveDist;		// Increase travel distance
							break;
				case 'W':	moveDir = 'N';	// West -> North
							break;
				case 'N':	moveDir = 'E';	// North -> East
							++moveDist;		// Increase travel distance
							break;
			}
		}

		switch (moveDir)	// If not last move in a direction
		{
			case 'E':	++y;	// Travel East
						break;
			case 'S':	++x;	// Travel South
						break;
			case 'W':	--y;	// Travel West
						break;
			case 'N':	--x;	// Travel North
						break;
		}
	}

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			printf("%lu\t", spiral[i][j]);
		}
		printf("\n");
	}

	return 0;
}
