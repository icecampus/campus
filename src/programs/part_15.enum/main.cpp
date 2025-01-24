#include <iostream>

enum ComputerState
{
	OFF = 0,
	ON,
	SLEEP,
	UPDATED
};

int main()
{
	ComputerState state = OFF;

	std::cout << "Size: " << sizeof(ComputerState);


	//if (state == OFF)
	//{
	//	std::cout << "hello my friend computer now off";
	//}
	//else if (state == ON)
	//{
	//	std::cout << "on";
	//}
	//else if (state == SLEEP)
	//{
	//	std::cout << "sleep";
	//}
	//else if (state == UPDATED)
	//{
	//	std::cout << "on update";
	//}
	

}
