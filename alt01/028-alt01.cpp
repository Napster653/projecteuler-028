#include <iostream>
#include <stdlib.h>
#include <string>

int main()
{
	unsigned long long int sum = 1;
	unsigned long long int i = 1;
	unsigned long long int skip = 2;

	while (i < 1002001)
	{
		i += skip;
		std::cout << i << std::endl;
		sum += i;

		i += skip;
		std::cout << i << std::endl;
		sum += i;

		i += skip;
		std::cout << i << std::endl;
		sum += i;

		i += skip;
		std::cout << i << std::endl;
		sum += i;

		skip += 2; 
	}

	printf("sum: %llu\n", sum);
}