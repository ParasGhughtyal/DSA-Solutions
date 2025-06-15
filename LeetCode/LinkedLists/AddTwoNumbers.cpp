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
    
        
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;
        int carry = 0;
        
        while (l1 != nullptr || l2 != nullptr || carry != 0)
        {

            int val1, val2;

            if(l1)
            val1 = l1->val;

            else
            val1 = 0;

            if(l2)
            val2 = l2->val;
            
            else
            val2 = 0;

            int total = val1 + val2 + carry;
            carry = total / 10;
            int digit = total % 10;

            current->next = new ListNode(digit);
            current = current->next;
            
            if (l1) 
            l1 = l1->next;

            if (l2)
            l2 = l2->next;
        }
        
        ListNode* result = dummy->next;
        delete dummy;
        return result;
        
    }
};
