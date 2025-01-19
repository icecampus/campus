#include <iostream>
#include <algorithm>

void e2_7()
{
	int x = 0;
	int y = 0;

	std::cout << "Input X and Y:" << std::endl;
	std::cin >> x;
	std::cin >> y;


	int i = 1;
	int power = 1;

	power = power * x;
	++y; 

	if (y <= x)
	{

	}

	std::cout << "power: " << power;
}

void e2_8()
{
	int x = 0;
	int y = 0;

	std::cout << "Input X and Y:" << std::endl;
	std::cin >> x;
	std::cin >> y;


	int i = 0;
	int power = 1;


	while (i < y)
	{
		power = power * x;
		++i;
	}


	std::cout << "power: " << power;
}


void e2_9()
{
	//a
	{
		int c = 0, product = 0;
		while (c <= 5)
		{
			product *= c;
			++c;
		}
	}

	//b
	{
		int value = 0;
		std::cin >> value;
	}

	//c
	{
		int gender = 1;
		if (gender == 1)
		{
			std::cout << "Female" << std::endl;
		}
		else
		{
			std::cout << "Male" << std::endl;
		}
	}
}

void e_13()
{
	float y = 10.0f;

	for (y = 0.1f; y <= 1.0f; y += 0.1f)
	{
		//...
	}


	
}

int main()
{
	
}
