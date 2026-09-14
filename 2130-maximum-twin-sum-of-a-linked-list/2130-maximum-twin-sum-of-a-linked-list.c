/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int pairSum(struct ListNode* head) {
    struct ListNode *temp=head;
    int count=0;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    int arr[count],k=0;
    temp=head;
    while(temp!=NULL){
        arr[k++]=temp->val;
        temp=temp->next;
    }
    int l=count-1;
    int twin[count],j=0;
    for(int i=0;i<count;i++){
        twin[j++]=arr[i]+arr[l-i];
    }
    int max=twin[0];
    for(int i=0;i<j;i++){
        if(twin[i]>max){
            max=twin[i];
        }
    }
    return max;

}