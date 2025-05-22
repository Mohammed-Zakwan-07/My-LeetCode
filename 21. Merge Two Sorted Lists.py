# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, A: Optional[ListNode], B: Optional[ListNode]) -> Optional[ListNode]:
        head = ListNode()
        curr = head

        while A and B:
            if A.val <= B.val:
                curr.next = A
                A = A.next
            else:
                curr.next = B
                B = B.next
                
            curr = curr.next
            
        if A:
            curr.next = A
        else:
            curr.next = B

        return head.next
