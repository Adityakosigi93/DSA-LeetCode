/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *slow=head;
    struct ListNode *fast=head;
    struct ListNode *temp=NULL;
    struct ListNode *slow1=NULL;
    struct ListNode *fast1=NULL;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;
        fast=fast->next;
        if(slow==fast){
        
            slow1=head;
            fast1=slow;
            while(slow1!=fast1){
                slow1=slow1->next;
                fast1=fast1->next;
                
            }
            return slow1;
        }
    }
    return temp;
}