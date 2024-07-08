#include <iostream>
#include <cctype>
#include <stdio.h>

int main(int ac, char **av)
{
	int i;
	int	j;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for(i = 1; av[i]; ++i)
		{
			for (j = 0; av[i][j]; ++j)
			{
				putchar(toupper(av[i][j]));
			}
			std::cout << ' ';
		}
	}
	std::cout << '\n';
}
