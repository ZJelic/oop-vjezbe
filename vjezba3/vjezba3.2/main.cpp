#include <iostream>
#include <string>
#include <algorithm>
#include <vector>;
using namespace std;

void strReverse(string str, vector<string>& vect)
{
	string::reverse_iterator riter = str.rbegin();

	while (*riter != ' ')
	{
		riter++;
	}

	*riter--;
	*riter = toupper(*riter);
	str[0] = tolower(str[0]);
	reverse(str.begin(), str.end() - 1);

	string buffer;

	for (string::iterator iter = str.begin(); iter < str.end(); iter++)
	{
		if (*iter == ' ' || *iter == '.')
		{
			buffer = buffer + ' ';

			reverse(buffer.begin(), buffer.end());
			vect.push_back(buffer);

			buffer.clear();
		}
		else
			buffer = buffer + *iter;
	}
	vect.push_back(".");
}

void print(vector<string> vect)
{
	for (vector<string>::iterator iter = vect.begin(); iter != vect.end(); iter++)
	{
		cout << *iter;
	}
}

int main()
{
	string str("Prva druga treca cetvrta.");

	vector<string>vect;
	strReverse(str, vect);
	print(vect);
}