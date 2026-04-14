class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;

        for (int i=0; i<nums.size(); i++) {
            mp[nums[i]] += 1;
        }

        for (auto it: mp) {
            int p = (nums.size())/2;
            if (it.second > p) {
                return it.first;
            }
        }

        return -1;
    }
};