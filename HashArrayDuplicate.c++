#include <iostream>
#include <unordered_map>

bool containDuplicate (vector<int> &nums) {
    unordered_map<int, int> mp;

    for (int i=0; i< nums.size(); i++) {
        mp[nums[i]] += 1;
    }

    for (auto it: mp) {
        if (it.second > 1) {
            return true;
        }
    }

    return false;
}