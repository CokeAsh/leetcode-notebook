// Package maxarea leetcode 11.盛最多水的容器
package maxarea

func maxArea(height []int) int {
	left := 0
	right := len(height) - 1
	maxArea := 0

	for left < right {

		area := min(height[left], height[right]) * (right - left)

		maxArea = max(maxArea, area)

		if height[right] > height[left] {
			left++
		} else {
			right--
		}
	}

	return maxArea
}
