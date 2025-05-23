# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reverseKGroup(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        if not head or k == 1:
            return head
        
        def getlenght(node):
            count = 0
            while node:
                count += 1
                node = node.next
            return count
        
        def reverse(start, k):
            prev, curr = None, start
            for _ in range(k):
                nextnode = curr.next
                curr.next = prev
                prev = curr
                curr = nextnode

            return prev, curr

        dum = ListNode(0)
        dum.next = head
        prevgroup = dum
        l = getlenght(head)

        while l >= k:
            curr = prevgroup.next
            newhead, nextgroup = reverse(curr, k)
            prevgroup.next = newhead
            curr.next = nextgroup
            prevgroup = curr
            l -= k

        return dum.next
