#include<iostream>
#include<algorithm>
#include<string>
#include<cctype>
using namespace std;

bool ValidPalindrome(const string& s)
{
	string str;
	for (auto& ch : s) if (isalnum(ch)) str.push_back(ch);
	transform(str.begin(), str.end(), str.begin(), tolower);
	auto left = str.begin(), right = prev(str.end());
	while (left < right)
	{
		if (*left != *right) return false;
		else { ++left; --right; }
	}
	return true;
}

int main()
{
	string str;
	cout << "Please input a string to determine whether it is a palindrome or not: ";
	getline(cin, str);
	bool isvalid = ValidPalindrome(str);
	if (isvalid) cout << "Yes, it is a palindrome." << endl;
	else cout << "No, it is not a palindrome." << endl;
	return EXIT_SUCCESS;
}