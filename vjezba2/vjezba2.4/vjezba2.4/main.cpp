#include <iostream>

int* fibonacciSeq(int *arr,int num)
{
	arr[0] = 1;
	arr[1] = 1;
	for (int i = 2; i < num; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	return arr;
}

int main()
{
	std::cout << "Array len, min of two elements:";

	int num;
	std::cin >> num;

	int* arr = new int[num];

	int* result = fibonacciSeq(arr,num);

	for (int i = 0; i < num; i++)
	{
		std::cout << result[i] << "\n";
	}

	delete[] arr;

	return 0;
}