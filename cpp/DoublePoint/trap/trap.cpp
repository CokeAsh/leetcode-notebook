#include <algorithm>
#include <vector>
class Solution {
  public:
    int trap(std::vector<int> height) {
        int length = height.size();
        if (length < 2) {
            return 0;
        }

        int sumSize = 0;

        int heighest = 0, heighestIndex = 0;
        for (int i = 0; i < length; i++) {
            if (height[i] > heighest) {
                heighest = height[i];
                heighestIndex = i;
            }
        }

        int maxLeft = 0;
        for (int i = 1; i < heighestIndex; i++) {
            maxLeft = std::max(maxLeft, height[i - 1]);
            int size = maxLeft - height[i];
            if (size > 0) {
                sumSize += size;
            }
        }

        int maxRight = 0;
        for (int i = length - 2; i < heighestIndex; i--) {
            maxRight = std::max(maxRight, height[i + 1]);
            int size = maxRight - height[i];
            if (size > 0) {
                sumSize += size;
            }
        }

        return sumSize;
    }
};
