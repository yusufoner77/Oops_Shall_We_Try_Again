#include <iostream>
#include <string>

using namespace std;

// function asks user for an input, and assigns their number to int value
// string "input" is message that will be displayed to user asking for value

string prompt(string intro, string error, int lowerBound = -500, int upperBound = 500 ) {
	string value;
	string defaultValue = "100";
	
	cout << intro << endl;
	cin >> value;

	if (value == "default") {
		value = defaultValue;
	}

	if (value == "exit") {
		exit(0);
	}
	
	// lowerBound is smallest valid integer, defaults to -500 if not specified
	// upperBound is largest valid integer, defaults to 500 if not specified
	// string error is message displayed to user if value is out of bounds
	
	while ( stoi(value) < lowerBound || stoi(value) > upperBound){
		std::cout << error << std::endl;
		std::cout << intro << std::endl;
		std::cin >> value;
	}
	
	return value;
}

int main() {
	string intro = "Please enter an integer. Enter \"default\" to use the default value of 100. Enter \"exit\" to leave the menu.";
	string error = "Your value is invalid.";
	string promptValue = prompt(intro, error, 0, 100);
    std::cout << "The value chosen by the user is " << promptValue << std::endl;
    return 0;
}