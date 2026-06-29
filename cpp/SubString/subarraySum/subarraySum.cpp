#include <unordered_map>
#include <vector>

class Solution {
  public:
    int subarraySum(std::vector<int> nums, int k) {

        std::unordered_map<int, int> mp = {};
        mp[0] = 1;

        int count = 0;
        int prefix = 0;

        for (auto num : nums) {
            prefix += num;

            if (mp.find(prefix - k) != mp.end()) {
                count += mp[prefix - k];
            }

            mp[prefix]++;
        }

        return count;
    }
};
