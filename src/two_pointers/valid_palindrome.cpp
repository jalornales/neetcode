#include <bits/stdc++.h>

/*
 * A phrase is a palindrome if, after converting all uppercase letters into
 * lowercase letters and removing all non-alphanumeric characters, it reads the
 * same forward and backward. Alphanumeric characters include letters and
 * numbers.
 *
 * Given a string s, return true if it is a palindrome, or false
 * otherwise.
 * */

bool isPalindrome(std::string s) {
    std::transform(s.begin(), s.end(), s.begin(), ::tolower);
    auto it = std::remove_if(s.begin(), s.end(),
                             [](char const& c) { return !std::isalnum(c); });
    s.erase(it, s.end());
    std::string orig = s;
    std::reverse(s.begin(), s.end());

    if(s == orig) {
        return true;
    } else {
        return false;
    }
}

int main(void) {
    bool result;
    std::string s;

    s = "A man, a plan, a canal: Panama";
    result = isPalindrome(s);
    result ? std::cout << "true\n" : std::cout << "false\n";

    s = "race a car";
    result = isPalindrome(s);
    result ? std::cout << "true\n" : std::cout << "false\n";

    s = " ";
    result = isPalindrome(s);
    result ? std::cout << "true\n" : std::cout << "false\n";

    s = "0P";
    result = isPalindrome(s);
    result ? std::cout << "true\n" : std::cout << "false\n";

    return 0;
}
