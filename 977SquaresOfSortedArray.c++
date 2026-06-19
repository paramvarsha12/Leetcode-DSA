class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
        int pos = nums.size()-1;
        vector<int> result(nums.size());

        while (left <= right) {
            int leftSq = nums[left]*nums[left];
            int rightSq = nums[right]*nums[right];

            if (leftSq > rightSq) {
                result[pos] = leftSq;
                left++;
            }

            else {
                result[pos] = rightSq;
                right--;
            }
            pos--;
        }

        return result;
    }
};