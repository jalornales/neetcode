#include <bits/stdc++.h>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> map;
    std::vector<int> result;
    int size = nums.size();
    int difference;

    for(int i = 0; i < size; i++) {
        difference = target - nums[i];

        if(map.find(difference) != map.end()) {
            result.push_back(map[target - nums[i]]);
            result.push_back(i);
        }

        map[nums[i]] = i;
    }

    return result;
}

int main(void) {
    std::vector<int> result;
    int target;

    std::vector<int> example1{2, 7, 11, 15};
    target = 9;
    result = twoSum(example1, target);
    std::cout << "[" << result.at(0) << ", " << result.at(1) << "]\n";

    std::vector<int> example2{3, 2, 4};
    target = 6;
    result = twoSum(example2, target);
    std::cout << "[" << result.at(0) << ", " << result.at(1) << "]\n";

    std::vector<int> example3{3, 3};
    target = 6;
    result = twoSum(example3, target);
    std::cout << "[" << result.at(0) << ", " << result.at(1) << "]\n";

    return 0;
}
