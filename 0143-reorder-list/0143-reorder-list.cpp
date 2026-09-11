/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        struct ListNode *temp=head;
        struct ListNode *temp1=head;
        int count=0;
        while(temp1!=NULL){
            temp1=temp1->next;
            count++;
        }
        temp=head;
        int arr[count],k=0;
        while(temp!=NULL){
            arr[k++]=temp->val;
            temp=temp->next;
        }
        temp=head;
        int s=0,l=count-1;
        while(temp!=NULL){
            temp->val=arr[s++];
            temp=temp->next;
            if(temp!=NULL){
                 temp->val=arr[l--];
                  temp=temp->next;
            }
           
           
            
        }

        

    }
};