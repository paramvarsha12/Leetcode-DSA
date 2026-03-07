bool Function(vector<int> nums, int target) {
    unordered_set<int> mp;
    
    for (int i=0; i<nums.size(); i++) {
        int complement = target - nums[i];
        if (mp.count(complement)) {
            return true;
        }
        
        else { 
            mp.insert(nums[i]);
    }
}

return false;
}