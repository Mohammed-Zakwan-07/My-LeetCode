/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    struct ListNode *prev = NULL, *curr = head, *newhead = head->next;

    while(curr != NULL && curr->next != NULL) {
        struct ListNode *nextpair = curr->next->next;

        if (prev != NULL) {
            prev->next = curr->next;
        }

        curr->next->next = curr;
        curr->next = nextpair;

        prev = curr;
        curr = nextpair;
    }
    return newhead;
}
