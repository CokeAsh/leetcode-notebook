package findanagrams

func findanagrams(s string, p string) []int {
	sLen := len(s)
	pLen := len(p)

	if sLen < pLen {
		return nil
	}

	pCount := [26]int{}
	// windowCount := slices.Repeat([]int{0}, 26)
	windowCount := [26]int{}

	for i := 0; i < pLen; i++ {
		pCount[p[i]-'a']++
		windowCount[s[i]-'a']++
	}

	res := []int{}

	if pCount == windowCount {
		res = append(res, 0)
	}

	for right := pLen; right < sLen; right++ {
		left := right - pLen
		windowCount[s[left]-'a']--
		windowCount[s[right]-'a']++

		if windowCount == pCount {
			res = append(res, left+1)
		}
	}

	return res
}
