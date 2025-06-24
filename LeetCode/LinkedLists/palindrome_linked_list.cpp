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
    bool isPalindrome(ListNode* head) {

        if(head->next == NULL)
        return true;
        
        ListNode* curr = head;
        int count = 0;

        while(curr)
        {
            curr = curr->next;
            count++;
        }

        curr = head;
        int mid = count/2;  

        ListNode* prev = NULL;

        while(mid--)
        {   
            prev = curr;
            curr = curr->next;
        }
        
        prev->next = NULL;
        prev = NULL;

        ListNode* second;

        while(curr)
        {
            second = curr->next;
            curr->next = prev;
            prev = curr;
            curr = second;
        }

        ListNode* list1 = head;
        ListNode* list2 = prev;

        while(list1)
        {
            if(list1->val != list2->val)
            return false;

            list1 = list1->next;
            list2 = list2->next;
        }
        
        return true;
    }
};
