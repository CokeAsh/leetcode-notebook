package lengthoflongestsubstring

func lengthoflongestsubstring(s string) int {
	if len(s) == 0 {
		return 0
	}
	if len(s) == 1 {
		return 1
	}

	left := 0
	maxLen := 0

	lastIndex := map[rune]int{}

	str := []rune(s)

	for right, value := range str {
		if index, ok := lastIndex[value]; ok && index >= left {
			left = index
		}

		lastIndex[value] = right

		maxLen = max(maxLen, right-left)

	}

	return maxLen
}
