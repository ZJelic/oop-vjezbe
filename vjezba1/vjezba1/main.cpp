#include <iostream>
#include <iomanip>

int main()
{
	bool flag;
	std::cout << "unesi " << true << " - " << false << std::endl;
	std::cin >> flag;
	std::cout << std::boolalpha << flag << std::endl;

	int a = 255;
	std::cout << "hex " << std::hex << a << std::endl;
	std::cout << "dec " << std::dec << a << std::endl;
	std::cout << "oct " << std::oct << a << std::endl;

	double pi = 3.141592;
	std::cout << "pi = " << std::scientific << std::uppercase;
	std::cout << std::setprecision(7) << std::setw(20) << std::setfill('0');
	std::cout << pi << std::endl;

	bool flag1;
	std::cout << "unesi " << true << " - " << false << std::endl;
	std::cin >> flag1;
	std::cout << std::noboolalpha << flag << std::endl;
	/*
	int number = 10;
	std::cout.width(4);
	std::cout << std::internal << number << std::endl;

	std::cout.width(5);
	std::cout << std::left << number << std::endl;

	std::cout.width(6);
	std::cout << std::right << number << std::endl;*/
}