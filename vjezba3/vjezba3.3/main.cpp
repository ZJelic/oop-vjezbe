#include <iostream>
#include <string>
using namespace std;

void delete_subStr(string& str, string subStr)
{
	size_t cntr = str.find(subStr);

	while (cntr != string::npos)
	{
		str.erase(cntr, subStr.size());
		cntr = str.find(subStr);
	}
}

int main()
{
	string str("JedanBla DvaBla Tri Cetiribla");
	string subStr("Bla");

	delete_subStr(str, subStr);
	cout << str << endl;
	cout << str;
}