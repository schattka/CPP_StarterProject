#include <iostream>
#include <functional>
#include <vector>

int main() 
{
	std::vector<double> myDoubleVector;
	std::cout << "Hello brave new world!!" << std::endl;
	
	// populate the vector
	myDoubleVector.push_back(1.234);
	myDoubleVector.push_back(3.1415);
	myDoubleVector.push_back(-1.0);


	// print the vector contensts
	std::cout << std::endl;
	std::cout << "=======================================" << std::endl;
	std::cout << "Vector elements:\n" << std::endl;
	for (size_t i = 0; i < myDoubleVector.size(); i++)
	{
		std::cout << "element[" << i << "] = " << myDoubleVector[i] << std::endl;
	}
	std::cout << "=======================================" << std::endl;
	
	return 0;
}
