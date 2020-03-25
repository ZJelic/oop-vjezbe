#include <iostream>
#include <vector>
using namespace std;

vector<int> elemAddition(vector<int> vect)
{
	int *arr = new int[vect.size() / 2];
	int counter = 0;

	for (int i = 0, j = vect.size() - 1; i < j; i++, j--)
	{
		arr[counter] = vect[i] + vect[j];
		counter++;
	}

	vector<int> vect1(arr, arr + counter);
	return vect1;
}

void print(vector<int> vect)
{
	for (int i = 0; i < vect.size(); i++)
	{
		cout << vect[i] << " ";
	}

}

void findMinMax(vector<int> vect, int& min, int& max)
{
	for (int i = 1; i < vect.size(); i++)
	{
		if (vect[i] > max)
			max = vect[i];
		else if (vect[i] < min)
			min = vect[i];
	}
}

int main()
{
	int arr[] = {1, 5, 10, 12, 1, 5, 3, 6, 15, 20, 1};

	vector<int>vect(arr, arr + (sizeof(arr) / sizeof(int)));

	vector<int>result(elemAddition(vect));

	int min = result[0], max = result[0];

	print(result);
	cout << endl;

	findMinMax(result, min, max);
	cout << "Max:" << max << endl;
	cout << "Min:" << min << endl;
}
