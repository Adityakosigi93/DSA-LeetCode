/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 void mergesort(int arr[],int low,int mid,int high){
    int left=low,right=mid+1,k=0;
    int temp[high-low+1];
    while(left<=mid && right<=high){
        if(arr[left]<arr[right]){
            temp[k++]=arr[left++];
        }
        else{
            temp[k++]=arr[right++];
        }
    }
    while(left<=mid){
        temp[k++]=arr[left++];
    }
    while(right<=high){
        temp[k++]=arr[right++];
    }
    for(int i=low,k=0;i<=high;i++)
        arr[i]=temp[k++];
    
 }
 void merge(int arr[],int low,int high){
    if(low>=high){
        return;
    }
    int mid=(low+high)/2;
    merge(arr,low,mid);
    merge(arr,mid+1,high);
    mergesort(arr,low,mid,high);
 }
struct ListNode* sortList(struct ListNode* head) {
    int count=0,l=0;
    if(head==NULL){
        return head;
    }
    struct ListNode *temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    temp=head;
    if(count==1){
        return head;
    }
    int arr[count];
    while(temp!=NULL){
        arr[l++]=temp->val;
        temp=temp->next;
    }
    merge(arr,0,count-1);
    temp=head;
    int g=0;
    while(temp!=NULL && g!=count){
        temp->val=arr[g++];
        temp=temp->next;
    }
    return head;

}