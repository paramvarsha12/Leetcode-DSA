class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;

        vector<int> Result(nums.size());
        int pos = nums.size()-1;

        while (left<=right) {
            int LeftSq = nums[left]*nums[left];
            int RightSq = nums[right]*nums[right];

            if (LeftSq > RightSq) {
                Result[pos] = LeftSq;
                left++;
            }

            else {
                Result[pos] = RightSq;
                right--;
            }
            pos--;
        }

        return Result;
    }
};