class Solution(object):
    def pivotIndex(self, nums):
        total = sum(nums)
        leftsum = 0

        for i, num in enumerate(nums):
            rightsum = total - leftsum - num
            if leftsum == rightsum:
                return i
            leftsum+=num
        return -1
