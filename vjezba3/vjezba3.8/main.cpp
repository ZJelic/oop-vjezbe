#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

vector<int> stuffing_bit(vector<int> cont)
{
	int counter = 0;

	for (vector<int>::iterator iter = cont.begin(); iter != cont.end(); iter++)
	{
		if (*iter == 1)
		{
			counter++;
			if (counter == 5)
			{
				iter++;
				iter = cont.insert(iter, 0);
			}
		}
		else
		{
			counter = 0;
		}
	}
	return cont;
}

vector<int> unstuffing_bit(vector<int> cont)
{
	int counter = 0;

	for (vector<int>::iterator iter = cont.begin(); iter != cont.end(); iter++)
	{
		if (*iter == 1)
			counter++;
		if (counter == 4 && *iter + 1 == 1)
		{
			counter = 0;
			cont.erase(cont.begin() + *iter);
		}
		if (*iter == 0)
			counter = 0;
	}
	return cont;
}

void print(vector<int> cont)
{
	for (vector<int>::iterator iter = cont.begin(); iter != cont.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;
}

int main()
{
	int bit = 0;

	vector<int>cont;

	while (bit == 0 || bit == 1)
	{
		cout << "Bit 0/1:" << endl;
		cin >> bit;

		if (bit == 0 || bit == 1)
			cont.push_back(bit);
	}

	print(cont);

	vector<int>result(stuffing_bit(cont));
	print(result);

	vector<int>result2(unstuffing_bit(cont));
	print(result2);
}