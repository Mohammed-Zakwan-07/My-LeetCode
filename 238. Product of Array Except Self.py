class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        arr = [1] * len(nums)

        prefix = 1
        for i in range(len(nums)):
            arr[i] = prefix
            prefix *= nums[i]

        suffix = 1
        for i in reversed(range(len(nums))):
            arr[i] *= suffix
            suffix *= nums[i]
        
        return arr
