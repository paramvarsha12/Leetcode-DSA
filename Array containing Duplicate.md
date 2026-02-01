#hashing 

Leetcode 217

---

```
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
```

---

### STEPS :

1) We first declare `unordered_map<int,int> mp`
2) We run a `for` loop and then if there is an element for every index value, increase the mp of that specific index value by one each time the number appears in the array
3) Then we run a `for loop (range based indexing)` for `mp` . 
4) `auto` means:
		“C++, please figure out the type for me.”
5) `it` is a variable
6) Now we need to understand what is `it.first` and `it.second`

7)     Suppose `5 -> 3` and `8 -> 2`. (5 appears 3 times and 8 appears 2 times)
8) `it.first  = 5` &  `it.second = 3`
9) `it.first  = 8` & `it.second = 2`
10) We check if the `it.second` in the main question appears more than once, so we check everything and then return true