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
void preorderHelper (struct TreeNode* root, int* result, int* index) {
    if (root == NULL) return ;
    result[*index] = root->val;
    (*index)++;
    preorderHelper(root->left, result, index);
    preorderHelper(root->right, result, index);
}
int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int index = 0;
    *returnSize = 0;
    int *result = (int *)malloc(100 * sizeof(int));

    preorderHelper(root, result, &index);

    *returnSize = index;
    return result;
}
