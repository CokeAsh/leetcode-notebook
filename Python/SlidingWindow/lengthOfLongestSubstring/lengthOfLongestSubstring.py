def lengthOfLengestSubstring(s: str) -> int:
    if len(s) == 0:
        return 0

    if len(s) == 1:
        return 1

    left = 0
    maxLen = 0

    lastIndex: dict[str, int] = {}

    for right, value in enumerate(s):
        if value in lastIndex and lastIndex[value] >= left:
            left = lastIndex[value] + 1

        lastIndex[value] = right

        maxLen = max(maxLen, right - left + 1)

    return maxLen


print(lengthOfLengestSubstring("abcabcbb"))
