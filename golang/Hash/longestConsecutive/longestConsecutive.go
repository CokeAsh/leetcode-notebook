package longestconsecutive

func longestConsecutive(nums []int) int {
	numsSet := make(map[int]struct{})

	for _, num := range nums {
		numsSet[num] = struct{}{}
	}

	maxLen := 0

	for num := range numsSet {
		if _, ok := numsSet[num-1]; !ok {
			currentNum := num
			count := 1

			for {
				if _, isExis := numsSet[currentNum+1]; !isExis {
					break
				}
				currentNum++
				count++
			}

			maxLen = max(count, maxLen)
		}
	}

	return maxLen
}
