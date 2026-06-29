def subarraySum(nums: list[int], k: int) -> int:
    count = 0
    prefix = 0
    mp: dict[int, int] = {}

    mp[0] = 1

    for num in nums:
        prefix += num

        if prefix - k in mp:
            count += mp.get(prefix - k, 0)

        mp[prefix] = mp.get(prefix, 0) + 1

    return count
