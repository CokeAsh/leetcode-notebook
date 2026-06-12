#include<algorithm>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

class Soultion{
    public:
        std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs){
            std::unordered_map<std::string, std::vector<std::string>> anagramMap;
            for(auto str: strs){
                auto word = str;
                std::sort(word.begin(),word.end());
                anagramMap[word].push_back(str);
            }
            std::vector<std::vector<std::string>> res;
            for(auto anagram : anagramMap){
                res.push_back(anagram.second);
            }

            return res;
        }
};
