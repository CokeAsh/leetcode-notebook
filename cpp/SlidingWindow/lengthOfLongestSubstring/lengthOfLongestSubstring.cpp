#include <string>
#include <unordered_map>
class soultion {
  public:
    int lengthOfLongestSubstring(std::string str) {

        if (str.length() == 0)
            return 0;
        if (str.length() == 1)
            return 1;

        int left = 0;
        int maxLen = 0;

        std::unordered_map<char, int> lastIndex;

        for (int right = 0; right < str.size(); right++) {
            char c = str[right];
            if (lastIndex.count(c) && lastIndex[c] >= left) {
                left = lastIndex[c] + 1;
            }

            lastIndex[c] = right;
            maxLen = std::max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};
