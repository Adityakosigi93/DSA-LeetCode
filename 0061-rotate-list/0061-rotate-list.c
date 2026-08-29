/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    struct ListNode *temp=head;
    
    if(head==NULL){
        return head;
    }
    int count=0;
    while(temp->next!=NULL){
        count++;
        temp=temp->next;
    }
    count++;
    if(count==1){
        return head;
    }
    if(k==0){
        return head;
    }
    if(count==k){
        return head;
    }
    if(k%count==0){
        return head;
    }
    int r=count-(k)%count;
    struct ListNode *temp1=head;
    while(temp1!=NULL){
        r--;
        if(r==0){
            break;
        }
        temp1=temp1->next;  
    }
    struct ListNode *pos=temp1->next;
    temp->next=head;
    temp1->next=NULL;
    return pos;
    
}