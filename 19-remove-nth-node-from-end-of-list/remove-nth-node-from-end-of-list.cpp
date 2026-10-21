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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int count=0;

        while(temp!=nullptr){
            count++;
            temp=temp->next;
        }
        int posFromLeft=count-n+1;
        temp=head;
        for(int i=1; i<posFromLeft-1; i++){
            temp=temp->next;
        }
        if(count==n){
            head=head->next;
        }else if(n==1){
            temp->next=nullptr;
        }else{
            temp->next=temp->next->next;
        }
        return head;
        
        
        
    }
};