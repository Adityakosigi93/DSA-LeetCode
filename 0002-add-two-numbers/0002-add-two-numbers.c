/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *temp1=l1;
    struct ListNode *temp2=l2;
    int count1=0,count2=0;
    while(temp1!=NULL){
        count1++;
        temp1=temp1->next;
    }
    while(temp2!=NULL){
        count2++;
        temp2=temp2->next;
    }
    temp1=l1;
    temp2=l2;
    struct ListNode *head=NULL;
    struct ListNode *tail=NULL;
    int carry=0,sum=0;
    while(temp1!=NULL && temp2!=NULL){
        
        struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        if(head == NULL){
            head=newNode;
            sum =(temp1->val+temp2->val+carry)%10 ;
            newNode->val=sum;
            head->next = NULL;
            tail = head;
            if(temp1->val+temp2->val+carry>9){
                carry=1;
            }
            else{
                carry=0;
            }
            
        }
        else{
            
            sum =(temp1->val+temp2->val+carry)%10 ;
            newNode->val=sum;
            newNode->next = NULL;
            tail->next = newNode;
            tail = newNode;
            if(temp1->val+temp2->val+carry>9){
                carry=1;
            }
            else{
                carry=0;
            }
        }

        temp1=temp1->next;
        temp2=temp2->next;
    }
    if(count1>count2){
        while(temp1!=NULL){
            struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
            sum =(temp1->val+carry)%10 ;
            newNode->val=sum;
            newNode->next = NULL;
            tail->next = newNode;
            tail = newNode;
            if(temp1->val+carry>9){
                carry=1;
            }
            else{
                carry=0;
            }
            temp1=temp1->next;

        }
            
    }
    else if(count2>count1){
        while(temp2!=NULL){
            struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
            sum =(temp2->val+carry)%10 ;
            newNode->val=sum;
            newNode->next = NULL;
            tail->next = newNode;
            tail = newNode;
            
            if(temp2->val+carry>9){
                carry=1;
            }
            else{
                carry=0;
            }
            temp2=temp2->next;
        }
            
    }
    if(carry==1){
     struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
     tail->next=newNode;
     newNode->val=carry;
     newNode->next=NULL;   
    }

    return head;
}