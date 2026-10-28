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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head!=nullptr && left==right){
            return head;
        }
        ListNode*dummy=new ListNode(0);
        dummy->next=head;
        ListNode* l=dummy;
        ListNode* lp=dummy;
        ListNode* r=dummy;
        ListNode* rn=dummy;
        

        for(int i=1; i<left; i++){
            lp=lp->next;
        }
        l=lp->next;
        for(int i=1; i<=right;i++){
            r=r->next;

        }
        rn=r->next;
        ListNode* curr=nullptr;
        ListNode* prev=nullptr;
        ListNode* temp=l;
       
        while(temp!=rn){
            curr=temp;
            temp=temp->next;
            curr->next=prev;
            prev=curr;

        }
        lp->next=r;
        l->next=rn;

        return dummy->next;

        
    }
};