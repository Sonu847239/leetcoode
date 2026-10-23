/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*, bool> visited;
        ListNode *A = headA;
        ListNode *B = headB;
         while (A != nullptr) {
            visited[A] = true;
            A = A->next;
        }
        
        while (B != nullptr) {
            if (visited.find(B) != visited.end()) {
                return B;
            }
            B = B->next;
        }
        
        return nullptr;
    }
};