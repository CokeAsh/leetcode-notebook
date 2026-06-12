def towSum(nums:list[int],target:int)-> list[int]:
    hashtable:dict[int,int] = dict()
    for i,num in enumerate(nums):
        if target - num in hashtable:
            return [hashtable[target - num], i]
        hashtable[nums[i]]=i

    return []
