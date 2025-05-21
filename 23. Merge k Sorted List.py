# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        A = []

        for i in lists:
            x = i

            while x:
                A.append(x.val)
                x = x.next

        A.sort()
        Head = ListNode(0)
        Curr = Head

        for i in A:
            Curr.next = ListNode(i)
            Curr = Curr.next

        return Head.next
