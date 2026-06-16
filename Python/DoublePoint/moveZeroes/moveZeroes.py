def moveZeroes(nums: list[int]):
    count: int = 0
    for index, num in enumerate(nums):
        nums[index - count] = nums[index]

        if num == 0:
            count += 1

    for index in range(count):
        nums[len(nums) - count + index - 1] = 0
