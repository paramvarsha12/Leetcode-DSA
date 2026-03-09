
---


We keep `one pointer fixed` and the other `two pointers approach`


---

```
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        vector<vector<int>> result;

        for (int i=0; i<nums.size(); i++) {
            if (i>0 && nums[i] == nums[i-1]) {
                continue;
            }

        int j = i+1;
        int k = nums.size()-1;

        while (j<k) {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum == 0) {
                result.push_back({nums[i], nums[j], nums[k]});
                j++;
                k--;
            }

            else if(sum<0) {
                j++;
            }

            else if (sum>0) {
                k--;
            }
        }
    }
    return result;
    }
};
```

