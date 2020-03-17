#include <iostream>

void minMax(int arr[], int len, int& min, int& max)
{
	for (int i = 1; i < len; i++)
	{
		if (arr[i] > max)
			max = arr[i];
		else if (arr[i] < min)
			min = arr[i];
	}
}

int main()
{
	int arr[5] = { -3,0,6,-10,12 };
	int len = sizeof(arr) / sizeof(arr[0]);

	int min = arr[0], max = arr[0];

	minMax(arr, len, min, max);

	std::cout << "min=" << min << std::endl;
	std::cout << "max=" << max << std::endl;

	return 0;
}