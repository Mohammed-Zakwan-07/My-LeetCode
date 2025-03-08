struct ListNode* swapNodes(struct ListNode* head, int k) {
    if (head == NULL) {
        return head;
    }

    int length = 0;
    struct ListNode *curr = head;

    while (curr != NULL) {
        length++;
        curr = curr->next;
    }
   
    if (length < 2) {
        return head;
    }
  
    int *A = (int *)malloc(length * sizeof(int));

    curr = head;
    int i = 0;

    while (curr != NULL) {
        A[i++] = curr->val;
        curr = curr->next;
    }

    int temp = A[k-1];  
    A[k-1] = A[length-k]; 
    A[length-k] = temp;

   
    curr = head;
    i = 0;
    while (curr != NULL) {
        curr->val = A[i++];
        curr = curr->next;
    }
    free(A);

    return head;
}
