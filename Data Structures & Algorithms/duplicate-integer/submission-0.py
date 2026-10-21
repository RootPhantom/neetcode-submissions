class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
       rootphantom = set()
       for num in nums:
        if num in rootphantom:
            return True
        rootphantom.add(num)
       return False