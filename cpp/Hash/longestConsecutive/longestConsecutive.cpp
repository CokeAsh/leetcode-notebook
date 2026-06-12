#include <algorithm>
#include <vector>
#include <unordered_set>
class Solution{
    public:
        int longestConsecutive(std::vector<int> nums){
            std::unordered_set<int> resSet(nums.begin(),nums.end());

            int maxLen = 0;
            for(auto num: resSet){
                if(resSet.find(num-1) == resSet.end()){
                    int  currentNum = num;
                    int count = 1;

                    while(resSet.find(currentNum+1)!=resSet.end()){
                        currentNum++;
                        count++;
                    }

                    maxLen = std::max(count,maxLen);
                }
            }

            return maxLen;
        }
};
