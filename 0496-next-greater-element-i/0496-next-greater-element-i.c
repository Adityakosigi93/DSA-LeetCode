/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int *ans = malloc(nums1Size * sizeof(int));
    int l=0;
    for(int i=0;i<nums1Size;i++){
        for(int j=0;j<nums2Size;j++){
            if(nums1[i]==nums2[j]){
                int flag=0;
                for(int k=j+1;k<nums2Size;k++){
                    if(k!=nums2Size && nums1[i]<nums2[k]){
                        flag=1;
                        ans[l++]=nums2[k];
                        break;
                    }
                }
                if(flag==0){
                    ans[l++]=-1;
                }
            }
        }
    }
    *returnSize=nums1Size;
    return ans;
}