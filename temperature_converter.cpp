#include <iostream>
#include<cmath>

int main() {

	double temp;
	char unit;

	std::cout << "***********temperature conversion *******\n";
	std::cout << "F= fahrenhit\n";
	std::cout << "C= celsius\n";
	std::cout << "what unit would you like to  convert to :";
	std::cin >> unit;

	
	if (unit == 'F'||unit =='f') {
		std::cout << "enter the tempreature in celsius:";
		std::cin >> temp;

		temp = (1.8 * temp) + 32.0;
		std::cout << "tempreature is :" << temp << "F\n";
	}
	else if (unit == 'C' || unit == 'c') {
		std::cout << " enter the tempreature in fahrenhit";
		std::cin >> temp;

		temp = (temp - 32) / 1.8;
		std::cout << "tempreature is :" << temp << "c\n";

	}
	else {
		std::cout << "please enter in only c or f";
	}
	
	std::cout << "********************************** *******\n";

	return 0;

}
