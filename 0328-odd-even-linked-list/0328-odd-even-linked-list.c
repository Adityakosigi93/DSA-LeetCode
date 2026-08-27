/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 struct ListNode2{
    int val1;
    struct ListNode2 *next;
 };
struct ListNode* oddEvenList(struct ListNode* head) {
    if(head==NULL){
        return head;
    }
    struct ListNode *temp=head;
    struct ListNode *temp1=NULL;
    struct ListNode *head2=NULL;

    while(temp!=NULL){
        struct ListNode *newNode = malloc(sizeof(struct ListNode));
        newNode->val=temp->val;
        newNode->next=NULL;
        if(temp1==NULL){
            newNode->next=temp1;
            temp1=newNode;
            head2=newNode;
        }
        else{
            temp1->next=newNode;
            temp1=newNode;
        }
        newNode->val=temp->val;
        temp=temp->next;
        if(temp!=NULL){
            temp=temp->next;
        }
        
    }
    temp=head;
    temp=temp->next;
    while(temp!=NULL){
        struct ListNode *newNode = malloc(sizeof(struct ListNode));
        newNode->val=temp->val;
        newNode->next=NULL;
        if (temp1 == NULL)
            temp1 = newNode;
        else{
            temp1->next = newNode;
            temp1=newNode;
        }
            
        temp=temp->next;
        if(temp!=NULL){
            temp=temp->next;
        }
        
    }
    return head2;
}