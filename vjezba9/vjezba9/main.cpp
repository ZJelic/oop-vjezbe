#include <iostream>
#include <string>
#include <vector>
#include "sort_stack.h"
using namespace std;

int main()
{
	char arr_char[] = "OdjeL za StRucne Studije";
	int arr_int[] = { 2,1,10,9,31,25,55 };

	sort(arr_int, sizeof(arr_int) / 4);
	sort(arr_char, sizeof(arr_char));

	for (int i = 0; i < sizeof(arr_char); i++)
		cout << arr_char[i];
	cout << endl;
	for (int i = 0; i < sizeof(arr_int) / 4; i++)
		cout << arr_int[i] << endl;


	stack<string> pt(2);

	pt.push("K");
	pt.push("G");
	pt.pop();
	pt.pop();
	pt.push("H");

	if (pt.isEmpty())
		cout << "Stack is empty!";
	else
		cout << "Stack is not empty!";
}