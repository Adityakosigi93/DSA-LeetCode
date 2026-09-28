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
void preorder(struct TreeNode *root,int *arr){
    if(root==NULL){
        return;
    }
    arr[k++]=root->val;
    preorder(root->left,arr);
    preorder(root->right,arr);
}
int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    k=0;
    int *arr=malloc(100*sizeof(int));
    preorder(root,arr);
    *returnSize=k;
    return arr;
}