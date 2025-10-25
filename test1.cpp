#include <string>
#include <iostream>

int main(void) {
	std::string a = "Hello";
	std::string* b = &a;
	std::cout << a << "\n";
	std::cout << b << "\n";
	return 0;
}