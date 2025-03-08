/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void inorderhelper(struct TreeNode* root, int *result, int *index) {
    if (root == NULL) return;
    inorderhelper(root->left, result, index);
    result[*index] = root->val;
    (*index)++;
    inorderhelper(root->right, result, index);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int *result = (int*)malloc(100 * sizeof(int));
    *returnSize = 0;
    int index = 0;

    inorderhelper(root, result, &index);

    *returnSize = index;
    return result;   
}
