#include <iostream>
#include <list>
using namespace std;

void listAdd(list<int> &lista, int& cntr)
{
	int cntr1 = 0, cntr2 = 0;

	for (list<int>::iterator iter = lista.begin(); iter != lista.end(); iter++)
	{
		if (*iter % 2 == 0)
		{
			iter++;
			iter = lista.insert(iter, 0);

		}
		else if (*iter % 2 == 1 && *iter != 1)
		{
			lista.insert(iter, 1);
		}
	}



	int  cntr3 = 0;

	for (list<int>::iterator i = lista.begin(); i != lista.end(); i++)
	{
		if (*i % 2 == 0)
			cntr3++;
	}

	if (cntr3 != lista.size())
	{
		list<int>::iterator iter1 = lista.begin();
		while (*iter1 != 0)
		{
			iter1++;
			cntr1++;

		}
		list<int>::reverse_iterator iter2 = lista.rbegin();
		while (*iter2 != 1)
		{
			iter2++;
			cntr2++;
		}
		cntr = (cntr1 + cntr2) + 2;
	}
	else
		cntr = lista.size();
}

void print(list<int> lista)
{
	for (list<int>::iterator i = lista.begin(); i != lista.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
}

int main()
{
	int cntr = 0;
	int arr[] = {3, 4, 5, 6, 6, 6, 9};

	list<int>lista(arr, arr + sizeof(arr) / sizeof(int));
	print(lista);

	listAdd(lista, cntr);
	print(lista);

	cout << lista.size() - cntr;
}