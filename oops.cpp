#include <iostream>

int prompt(int lowerBound, int upperBound, std::string input, std::string error) {
	int value;
	std::cout << input << std::endl;
	std::cin >> value;
	
	while ( value < lowerBound || value > upperBound){
		std::cout << error << std::endl;
		std::cout << input << std::endl;
		std::cin >> value;
	}
	
	return value;
}

int main() {
	int value = prompt(0, 100, "Please enter a value", "Your value is invalid");
    std::cout << "The value chosen by the user is " << value << std::endl;
    return 0;
}