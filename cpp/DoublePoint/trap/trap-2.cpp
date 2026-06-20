#include <algorithm>
#include <vector>
class Solution {
  public:
    int trap(std::vector<int> height) {
        int length = height.size();
        if (length < 2) {
            return 0;
        }

        int left = 0;
        int right = length - 1;

        int sumSize = 0;

        int leftMax = 0;
        int rightMax = 0;

        while (left < right) {
            if (height[left] < height[right]) {
                leftMax = std::max(leftMax, height[left]);
                sumSize += leftMax - height[left];
                left++;
            } else {
                rightMax = std::max(rightMax, height[right]);
                sumSize += rightMax - height[right];
                right--;
            }
        }

        return sumSize;
    }
};
