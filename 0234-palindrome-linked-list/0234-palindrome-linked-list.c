struct ListNode1 {
      int val1;
      struct ListNode1 *next;
 };

bool isPalindrome(struct ListNode* head) {
    struct ListNode *temp1=head;
    struct ListNode1 *temp=NULL;
    struct ListNode1 *prev=NULL;
    struct ListNode1 *Next=NULL;

    while(temp1!=NULL){
        Next=malloc(sizeof(struct ListNode1));
        Next->val1=temp1->val;
        Next->next=prev;
        prev=Next;
        temp1=temp1->next;
    }

    temp1=head;

    while(prev!=NULL && temp1!=NULL){
        if(prev->val1==temp1->val){
            
        }
        else{
            return false;
        }
        prev=prev->next;
        temp1=temp1->next;
    }

    return true;
}