#include <iostream>
#include <string>
#include "add.h"
#include "sub.h"
#include "mult.h"
#include "vid.h"

int max = 400;

int main() {
	int a, b;
	char operation;
	
	std::cout << "Enter operation, e.g. (1 + 1):\n";
	std::cin >> a >> operation >> b;
	
	if (a > max || b > max) {
		std::cout << "Sorry, input number was greater than " << max << "\n";
		return 0;
	}

	int result = 0;
	switch (operation) {
		case '+':
			result = add(a, b);
			break;
		case '-':
			result = sub(a, b);
			break;
		case '*':
			result = mult(a, b);
			break;
		case '/':
			result = vid(a, b);
			break;
	}

	std::cout << "Result: " << result << "\n";
	return 0;
}

/*
struct factors(string user_input) {
	std::string user_input;

	std::cout << "Enter operation, e.g. (1 + 1):\n";
	std::cin >> user_input;
	
	long unsigned int i = 0;
	for (; i < user_input.length(); i++) {
		if (user_input.at(i) == ' ' || user_input.at(i) == '+' || user_input.at(i) == '-' || user_input.at(i) == '*' || user_input.at(i) == '/') {
			break;
		}
	}
	std::cout << "value input: " << user_input << "\n";
	int a = stoi(user_input.substr(0, i));
	std::cout << "value i: " << i << "\n";
	std::cout << "value at i: " << user_input.at(1) << "\n";
	i += user_input.at(i) == ' ' ? 1 : 0;
	std::cout << "debug\n";
	char operation = user_input.at(i);
	std::cout << "debug\n";
	i += user_input.at(i) == ' ' ? 1 : 0;
	std::cout << "debug\n";
	int b = stoi(user_input.substr(i+1, user_input.length() - i - 1));

	return stuff;
}

*/
