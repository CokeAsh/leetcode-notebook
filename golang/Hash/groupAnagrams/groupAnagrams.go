package groupanagrams

import (
	"slices"
)

func groupAnagrams(strs []string) [][]string {

	anagramsMap := make(map[string][]string)
	for _, str := range strs {
		b := []byte(str)
		// sort.Slice(b, func(i, j int) bool { return b[i] < b[j] })
		slices.Sort(b)
		word := string(b)
		anagramsMap[word] = append(anagramsMap[word], str)
	}
	res := [][]string{}
	for _, anagram := range anagramsMap {
		res = append(res, anagram)
	}
	return res
}
