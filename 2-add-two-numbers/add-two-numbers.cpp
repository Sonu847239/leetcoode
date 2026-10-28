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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy=new ListNode(0);
        int carry=0;
        ListNode* temp=dummy;

        while(l1!=nullptr || l2!=nullptr || carry!=0){
            int d1=(l1==nullptr)? 0: l1->val;
            int d2=(l2==nullptr)?0: l2->val;

            int sum =d1+d2+carry;
            int nd=sum%10;
            carry=sum/10;
            ListNode* n=new ListNode(nd);
            temp->next=n;
            temp=temp->next;


            if(l1!=nullptr) l1=l1->next;
            if(l2!=nullptr) l2=l2->next;
        }
        return dummy->next;
        
    }
};