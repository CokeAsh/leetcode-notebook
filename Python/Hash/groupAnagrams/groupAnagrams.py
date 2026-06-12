def groupAnagrams(strs: list[str]) -> list[list[str]]:

    anagramMap: dict[str, list[str]] = {}

    for string in strs:
        word: str = "".join(sorted(string))

        if word not in anagramMap:
            anagramMap[word] = []
        anagramMap[word].append(string)

    res: list[list[str]] = []
    for anagram in anagramMap.values():
        res.append(anagram)

    return res
