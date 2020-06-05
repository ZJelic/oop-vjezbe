#include<iostream>
#include<string>
#include <regex>
using namespace std;

bool check_wildCardMatch(string text, string pattern) {
	int text_size = text.size();
	int pattern_size = pattern.size();

	if (pattern_size == 0)
		return (text_size == 0);

	int i = 0, j = 0, textPosition = -1, patternPosition = -1;
	while (i < text_size) {
		if (text[i] == pattern[j]) {
			i++;
			j++;
		}
		else if (j < pattern_size && pattern[j] == '?') {
			i++;
			j++;
		}
		else if (j < pattern_size && pattern[j] == '*') {
			textPosition = i;
			patternPosition = j;
			j++;
		}
		else if (patternPosition != -1) {
			j = patternPosition + 1;
			i = textPosition + 1;
			textPosition++;
		}
		else
			return false;
	}

	while (j < pattern_size && pattern[j] == '*') {
		j++; //j++ when wildcard is '*'
	}

	if (j == pattern_size) {
		return true;
	}

	return false;
}

int main() {
	string text;
	string pattern;

	cout << "Enter text: ";
	cin >> text;
	cout << "Enter wildcard pattern: ";
	cin >> pattern;

	if (check_wildCardMatch(text, pattern))
		cout << "Match!" << endl;
	else
		cout << "Not matched!" << endl;
}