class Solution:
    def longestConsecutive(self, nums: list[int]) -> int:
        numSet: set[int] = set(nums)

        maxLen: int = 0

        for num in numSet:
            if num - 1 not in numSet:
                currentNum: int = num
                count: int = 1

                while currentNum + 1 in numSet:
                    currentNum += 1
                    count += 1

                maxLen = max(maxLen, count)

        return maxLen
