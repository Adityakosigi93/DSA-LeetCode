/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    int count=0;
    struct ListNode *temp=head;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    struct ListNode *temp1=head;

    if(count%2!=0){
        count=ceil(count/2);
        while(count!=0){
            count--;
            temp1=temp1->next;
        }
        return temp1;
    }
    if(count%2==0){
        count=(count/2);
        while(count!=0){
            count--;
            temp1=temp1->next;
        }
        return temp1;
    }
    return temp1;
}