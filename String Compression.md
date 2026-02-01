#strings 

Leetcode 443

---

```
class Solution {
public:
    int compress(vector<char>& chars) {

        unordered_map<char, int> mp;

        for (int i=0; i< chars.size(); i++) {
            mp[chars[i]] += 1;
        }

        vector<char> mrinal;
        
        for (auto it: mp) {
            mrinal.push_back(it.first);
            
            if (it.second > 1 && it.second <10) {
            
                string count = to_string(it.second);
                for (char c: count) {
                    mrinal.push_back(c);
                }
            }
        }

        chars = mrinal;
        return mrinal.size();
    }
};
```

---

BS question, the logic is correct in mine, leetcode discussion page says its bs