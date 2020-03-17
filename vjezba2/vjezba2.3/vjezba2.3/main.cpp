#include <iostream>

int& arrEleRef(int arr[], int position)
{
	return arr[position];
}

int main()
{
	int arr[6] = {1,2,3,10,12,15};
	int position;
	
	std::cout << "Position:" << std::endl;
	std::cin >> position;

	std::cout << (arrEleRef(arr,position) += 1) << std::endl;

	return 0;
}