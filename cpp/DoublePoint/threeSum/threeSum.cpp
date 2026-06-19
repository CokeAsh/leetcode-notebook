#include <algorithm>
#include <vector>
class Solution {
  public:
    std::vector<std::vector<int>> threeSum(std::vector<int> nums) {
        int length = nums.size();
        if (length < 3) {
            return {};
        };

        std::sort(nums.begin(), nums.end());

        std::vector<std::vector<int>> res = {};

        for (int i = 0; i < length - 2; i++) {

            if (nums[i] > 0) {
                break;
            }

            int left = i + 1;
            int right = length - 1;
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0) {
                    res.push_back({nums[i], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left + 1])
                        left++;
                    while (left < right && nums[right] == nums[right - 1])
                        right--;
                    left++;
                    right--;

                } else if (sum < 0) {
                    left++;
                } else {
                    right--;
                }
            }
        }

        return res;
    }
};
