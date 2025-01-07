#include <iostream>

int main()
{
	int val = 10;
	float fVal = 10.f;
	void* ptr = 0;


	ptr = &val;
	ptr = &fVal;


	//std::cout << "value: " << *ptr << "\n";

	//*ptr = 20;

	//std::cout << "value: " << *ptr << "\n";
	std::cout << "val: " << val << "\n";

}
