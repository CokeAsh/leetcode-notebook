#include <bits/floatn-common.h>
#include <vector>

class Solution{
    public:
        void moveZeroes(std::vector<int>& nums){
            int count=0;
            for(int i =0;i<nums.size();i++){

                nums[i-count]=nums[i];

                if(nums[i]==0){
                    count++;
                }
            }

            for(int i=nums.size()-count;i<nums.size();i++){
                nums[i]=0;
            }

        }

};
