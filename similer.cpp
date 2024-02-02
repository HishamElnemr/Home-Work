#include <iostream>
#include <cctype>
#include <vector>
#include <regex>
#include <string>
#include <bitset>
#include <array>
#include <regex>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
	string s = "ab";
	string t = "ba";
	string result = "";
	sort(s.begin(), s.end());
	sort(t.begin(), t.end());
	if (s == t)
	{
		cout << true << "\n";
	}
	else
	{
		cout << false << "\n";
	}
	cout << s << "\n";
	cout << t << "\n";
	return 0;
}