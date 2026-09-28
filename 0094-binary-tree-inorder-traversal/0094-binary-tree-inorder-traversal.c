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
int k=0;
void inorder(struct TreeNode *root,int *arr){
    if(root==NULL){
        return;
    }
    inorder(root->left,arr);
    arr[k++]=root->val;
    inorder(root->right,arr);

}
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    k=0;
    int *arr = malloc(100 * sizeof(int));
    inorder(root,arr);
    *returnSize=k;
    return arr;
}