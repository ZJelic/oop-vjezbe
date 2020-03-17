#include <iostream>

int *positiveIntegers(int& num)
{
	int *arr = new int[num];

	int i = 0, count = 10;

	while (arr[i] != 0)
	{
		std::cout << "Enter positive integer:" << std::endl;
		std::cin >> arr[i];

		if (arr[i] < 0)
			std::cout << "Negative integer!" << std::endl;
		else if (arr[i] > 0)
		{
			i++;
			if (i == count)
			{
				int *temp = new int[count + 10];
				std::copy(arr, arr + count, temp);
				delete[] arr;
				arr = temp;
				count += 10;
			}
		}
	}
	num = i;

	return arr;
}

int main()
{
	int num = 10;

	int *result = positiveIntegers(num);

	for (int i = 0; i < num; i++)
	{
		std::cout << result[i] << " ";
	}

	delete[] result;
	result = 0;
}