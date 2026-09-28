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
void postorder(struct TreeNode *root,int *arr){
    if(root==NULL){
        return;
    }
    postorder(root->left,arr);
    postorder(root->right,arr);
    arr[k++]=root->val;
}
int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    k=0;
    int *arr=malloc(100*sizeof(int));
    postorder(root,arr);
    *returnSize=k;
    return arr;
}