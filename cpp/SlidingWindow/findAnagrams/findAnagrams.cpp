#include <string>
#include <vector>
class Solution {
  public:
    std::vector<int> findAnagrams(std::string s, std::string p) {
        std::vector<int> res = {};
        std::vector<int> pCount(26, 0);
        std::vector<int> windowCount(26, 0);

        int pLen = p.size();
        int sLen = s.size();

        for (int i = 0; i < pLen; i++) {
            pCount[p[i] - 'a']++;
            windowCount[s[i] - 'a']++;
        }

        if (pCount == windowCount) {
            res.push_back(0);
        }

        for (int right = pLen; right < sLen - pLen; right++) {
            int left = right - pLen;
            windowCount[s[right] - 'a']++;
            windowCount[s[left] - 'a']--;

            if (pCount == windowCount) {
                res.push_back(left + 1);
            }
        }

        return res;
    }
};
