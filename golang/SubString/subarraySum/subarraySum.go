package subarraysum

func subarraysum(nums []int, k int) int {
	mp := map[int]int{}
	mp[0] = 1

	count := 0
	prefix := 0

	for _, num := range nums {
		prefix += num
		if _, ok := mp[prefix-k]; ok {
			count += mp[prefix-k]
		}

		mp[prefix]++
	}

	return count
}
