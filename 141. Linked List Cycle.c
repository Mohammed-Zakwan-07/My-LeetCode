/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    if (head == NULL|| head->next == NULL) {
        return false;
    }
    struct ListNode *CurrFast = head;
    struct ListNode *CurrSlow = head;
    while (CurrFast != NULL && CurrFast->next != NULL) {
        CurrFast = CurrFast->next->next;
        CurrSlow = CurrSlow->next;
        if (CurrFast == CurrSlow) {
            return true;
        }
    }
    return false;
}
