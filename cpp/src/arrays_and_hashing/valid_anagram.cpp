#include <bits/stdc++.h>

bool isAnagram(std::string s, std::string t) {
    std::sort(s.begin(), s.end());
    std::sort(t.begin(), t.end());
    if(s == t) {
        return true;
    } else {
        return false;
    }
}

int main(void) {
    bool result;

    std::string s = "anagram", t = "nagaram";
    result = isAnagram(s, t);
    result ? std::cout << "true\n" : std::cout << "false\n";

    s = "rat", t = "car";
    result = isAnagram(s, t);
    result ? std::cout << "true\n" : std::cout << "false\n";
}
