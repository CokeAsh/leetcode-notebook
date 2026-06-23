def findAnagrams(p: str, s: str) -> list[int]:
    sLen = len(s)
    pLen = len(p)

    res: list[int] = []

    if sLen < pLen:
        return res

    pCount = [0 for _ in range(26)]
    windowCount = [0 for _ in range(26)]

    for i in range(pLen):
        pCount[ord(p[i]) - ord("a")] += 1
        windowCount[ord(s[i]) - ord("a")] += 1

    if pCount == windowCount:
        res.append(0)

    for right in range(pLen, sLen):
        left = right - pLen
        windowCount[ord(s[left]) - ord("a")] -= 1
        windowCount[ord(s[right]) - ord("a")] += 1

        if windowCount == pCount:
            res.append(left + 1)

    return res
