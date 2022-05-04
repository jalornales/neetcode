#include <bits/stdc++.h>

bool containsDuplicate(std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end());
    return std::unique(nums.begin(), nums.end()) != nums.end();
}

int main(void) {
    bool result;

    std::vector<int> example1{1, 2, 3, 1};
    result = containsDuplicate(example1);
    result ? std::cout << "true\n" : std::cout << "false\n";

    std::vector<int> example2{1, 2, 3, 4};
    result = containsDuplicate(example2);
    result ? std::cout << "true\n" : std::cout << "false\n";

    std::vector<int> example3{1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    result = containsDuplicate(example3);
    result ? std::cout << "true\n" : std::cout << "false\n";
}
