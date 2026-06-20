// Package trap jieyushui
package trap

func tarp(height []int) int {
	sum := 0
	length := len(height)

	left := 0
	right := length - 1

	leftMax := 0
	rightMax := 0

	for left < right {
		if height[left] < height[right] {
			leftMax = max(leftMax, height[left])
			sum += leftMax - height[left]
			left++
		} else {
			rightMax = max(rightMax, height[right])
			sum += rightMax - height[right]
			right--
		}
	}

	return sum
}
