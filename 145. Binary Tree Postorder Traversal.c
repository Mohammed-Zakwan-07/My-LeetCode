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
void postorderHelper(struct TreeNode* root, int *result, int* index) {
    if (root == NULL) return;
    postorderHelper(root->left, result, index);
    postorderHelper(root->right, result, index);
    result[*index] = root->val;
    (*index)++;
}
int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    int *result = (int *)malloc(100 * sizeof(int));
    *returnSize = 0;
    int index = 0;

    postorderHelper(root, result, &index);

    *returnSize = index;
    return result;
}
