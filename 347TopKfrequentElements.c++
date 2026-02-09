class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> freq;

        for (int n: nums) {
            freq[n] += 1;
        }

        vector<vector<int>> buckets(nums.size()+1);

        for (auto &it: freq) {
            buckets[it.second].push_back(it.first);
        }
        
        vector<int> res;
        for (int i = buckets.size()-1; i>=0; i--) {
            for (int num: buckets[i]) {
                res.push_back(num);
                if (res.size() == k) {
                    return res;
                }
            }
        }

        return {};
        
    }
};