#include <iostream>
#include <cctype> // for ::toupper
#include <algorithm>
#include <deque>

bool isPalindrome(std::string str) {
	//std::string transformedstr = str;
	std::transform(str.begin(), str.end(), str.begin(), std::toupper);
	std::deque<char> d(str.begin(), str.end());

	std::deque<char> d_rev(d.rbegin(), d.rend());

	return d == d_rev;
}

int main() {
	std::cout << isPalindrome("ASantaatNASA") << std::endl;
}