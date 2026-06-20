def tarp(heights: list[int]) -> int:
    length = len(heights)

    sum = 0
    left = 0
    right = length - 1

    leftMax = 0
    rightMax = 0

    while left < right:
        if heights[left] < heights[right]:
            leftMax = max(leftMax, heights[left])
            sum += leftMax - heights[left]
            left += 1
        else:
            rightMax = max(rightMax, heights[right])
            sum += rightMax - heights[right]
            right -= 1

    return sum
