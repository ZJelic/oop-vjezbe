#include <iostream>
#include <string>
using namespace std;

string longest_subStr(string str1, string str2)
{
	string temp, max;
	int count = 0;

	for (int i = 0; i != str1.length(); i++)
	{
		temp.push_back(str1[i]);

		for (int j = i + 1; i <= str1.length(); j++)
		{
			if (str2.find(temp) != string::npos)
			{
				int count1 = temp.size();

				if (count1 > count)
				{
					count = count1;
					max = temp;
				}
				temp.push_back(str1[j]);
			}
			else
			{
				temp.clear();
				break;
			}
		}
	}
	return max;
}

int main()
{
	string str1("Trazim najduzi podstring u stringu");
	string str2("Nadjen je najduzi podstring u stringu");

	string result = longest_subStr(str1, str2);
	cout << result;
}