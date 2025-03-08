/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode *Prev, *Curr;

    if (head == NULL) {
        return head;
    }
    Curr = head->next;
    Prev = head;
    while(Curr) {
        if (Prev->val == Curr->val) {
            Prev->next = Curr->next;
        }else{
            Prev = Curr;
        }
        Curr = Curr->next;
    }
    return head;
}
