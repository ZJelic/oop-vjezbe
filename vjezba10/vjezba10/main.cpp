#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <functional>
#include <string>
using namespace std;

void stlAlgoritmi(string txtDat) {
	vector<int> v;

	ifstream f(txtDat);
	try {
		if (!f) {
			string message = "Empty!";
			throw message;
		}
	}
	catch (string message) {
		cout << message;
		return;
	}
	istream_iterator<int> is(f), eos;
	copy(is, eos, back_inserter(v));

	int countBigger = 0;
	int minNum, maxNum;
	minNum = v[0];
	maxNum = v[0];
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] > 500)
			countBigger++;
		if (v[i] < minNum) 
			minNum = v[i];
		if (v[i] > maxNum)
			maxNum = v[i];
		if (v[i] < 300)
		{
			v.erase(v.begin() + i);
			i--;
		}
	}
	cout << "Min broj: " << minNum << endl;
	cout << "Max broj: " << maxNum << endl;
	cout << "Brojevi veci od 500: " << countBigger << endl;

	sort(v.begin(), v.end(), greater<int>());

	ostream_iterator<int> os(cout, ",");
	copy(v.begin(), v.end(), os);
}
int main() {
	stlAlgoritmi("numbers.txt");
}