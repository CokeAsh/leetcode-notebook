def threeSum(nums: list[int]) -> list[list[int]]:
    nums.sort()
    res: list[list[int]] = list()

    length = len(nums)

    if length < 3:
        return res

    for index, value in enumerate(nums):
        if index >= length - 2:
            break

        if index > 0 and value == nums[index - 1]:
            continue

        left = index + 1
        right = length - 1

        while left < right:
            sum = value + nums[right] + nums[left]
            if sum == 0:
                res.append([value, nums[left], nums[right]])

                while left < right and nums[left] == nums[left + 1]:
                    left += 1
                while left < right and nums[right] == nums[right - 1]:
                    right -= 1

                left += 1
                right -= 1

            elif sum < 0:
                left += 1
            else:
                right -= 1

    return res
