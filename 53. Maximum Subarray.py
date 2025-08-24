class Solution(object):
    def maxSubArray(self, nums):
        currmax = maxsum = nums[0]

        for num in nums[1:]:
            currmax = max(num, currmax+num)
            maxsum = max(maxsum, currmax)
        return maxsum
