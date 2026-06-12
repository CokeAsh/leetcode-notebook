#include <utility>
#include <vector>
#include <unordered_map>
#include <iostream>

class Solution{
    public:
        std::vector<int> twoSum(std::vector<int>& nums, int target){

            std::unordered_map<int, int> hash_table;
            for(int i=0;i<nums.size();i++){
                auto it = hash_table.find(target - nums[i]);
                if(it != hash_table.end()){
                    return {it->second,i};
                }
                hash_table.insert(std::make_pair(nums[i], i));
            }
            return  {};
        }
};


int main(){
    Solution so;
    std::vector<int> nums ={3,2,4};
    auto res=so.twoSum(nums, 6);
    for(auto num: res){
        std::cout<<num<<std::endl;
    }
}
