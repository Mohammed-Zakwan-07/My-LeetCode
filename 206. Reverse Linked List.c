/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* newlist = NULL;
    struct ListNode* curr = head;
    struct ListNode* currnext;

    while(curr) {
        currnext = curr->next;
        curr->next = newlist;
        newlist = curr;
        curr = currnext;
    }
    return newlist;
}
