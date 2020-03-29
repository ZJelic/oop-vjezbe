#include <iostream>
#include <string>
#include <vector>
using namespace std;

int vowels(char ch)
{
	if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
		return 1;
	return 0;
}

string pigLatin(vector<string> vec)
{
	int k = rand() % vec.size();
	string buffer = vec[k];
	string result, tmp;
	string::iterator iter = buffer.begin();

	while (iter != buffer.end())
	{
		if (*iter != ' ' && *iter != '.' && *iter != '!' && *iter != '?')
		{
			tmp = tmp + *iter;
			iter++;
		}
		else
		{
			if (vowels(tmp[0]) == 1)
			{
				tmp = tmp + "hay";
				result = result + " " + tmp;
				tmp.clear();
			}
			else
			{
				string::iterator j = tmp.begin();
				while (vowels(*j) == 0)
				{
					tmp = tmp + tmp[0];
					tmp.erase(tmp.begin());
				}
				tmp = tmp + "ay";
				result = result + " " + tmp;
				tmp.clear();
			}
			iter++;
		}
	}
	return result + buffer[buffer.length() - 1];
}

int main()
{
	string str1("What time is it?");
	string str2("Drawn beyond the lines of reason.");

	vector<string> vec;
	vec.push_back(str1);
	vec.push_back(str2);

	string result = pigLatin(vec);
	cout << result;
}