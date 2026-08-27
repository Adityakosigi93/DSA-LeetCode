/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {
    int count=0;
    struct ListNode *temp=head;
   
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    if(count==1){
        return NULL;
    }
    int n=(count/2)-1;
    temp=head;
    while(temp!=NULL){
        if(n==0){
            temp->next=temp->next->next;
            while(temp!=NULL){
                temp=temp->next;
            }
        }
        else{
            n--;
            temp=temp->next;
        }
    }
    return head;
}