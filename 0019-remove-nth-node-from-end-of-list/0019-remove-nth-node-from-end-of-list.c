/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode *temp=head;
    int count=0;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    int r=count-n-1;
    temp=head;
    if(n==count){
        temp=temp->next;
        return temp;
    }
    if(n==1){
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        temp->next=NULL;
        return head;
    }
    
    while(temp!=NULL){
        
        if(r==0 ){
            temp->next=temp->next->next;
            while(temp!=NULL){
                temp=temp->next;
            }
        }
        else{
            r--;
            temp=temp->next;
        }
    }
    return head;

}