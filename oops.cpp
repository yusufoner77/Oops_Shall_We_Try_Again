#include <iostream>

// function asks user for an input, and assigns their number to int value
// string "input" is message that will be displayed to user asking for value

int prompt(std::string input, std::string error, int lowerBound = -500, int upperBound = 500 ) {
	int value;
	std::cout << input << std::endl;
	std::cin >> value;
	
	// lowerBound is smallest valid integer, defaults to -500 if not specified
	// upperBound is largest valid integer, defaults to 500 if not specified
	// string error is message displayed to user if value is out of bounds
	
	while ( value < lowerBound || value > upperBound){
		std::cout << error << std::endl;
		std::cout << input << std::endl;
		std::cin >> value;
	}
	
	return value;
}

int main() {
	int value = prompt("Please enter an integer", "Your value is invalid", 0, 100);
    std::cout << "The value chosen by the user is " << value << std::endl;
    return 0;
}