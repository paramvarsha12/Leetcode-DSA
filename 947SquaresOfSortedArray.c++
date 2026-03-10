class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector<int> Result;

        for (int i=0; i<nums.size(); i++) {
            int square;
            square = nums[i]*nums[i];
            Result.push_back({square});
    }

    sort(Result.begin(), Result.end());

    return Result;
    }
};