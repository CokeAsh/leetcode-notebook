package movezeroes

func moveZeroes(nums []int) {
	count := 0
	for index, num := range nums {
		nums[index-count] = nums[index]

		if num == 0 {
			count++
		}
	}

	for i := len(nums) - count; i < len(nums); i++ {
		nums[i] = 0
	}
}
