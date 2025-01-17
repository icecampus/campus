#include <iostream>
#include <algorithm>

int main()
{
	int a = 5;
	int b = 7;

	std::cout << "a: " << a << ", b: " << b << "\n";

	{
		int c = 0;
		c = b;
		b = a;
		a = c;
	}

	{
		a = a + b;
		b = a - b;
		a = a - b;
	}

	{
		std::swap(a, b);
	}

	std::cout << "a: " << a << ", b: " << b;


}
