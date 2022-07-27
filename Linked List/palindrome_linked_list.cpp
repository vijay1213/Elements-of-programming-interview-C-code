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
        
        if(head == NULL || head->next == NULL) {
            return true;
        }
        ListNode*slow = head;
        ListNode*fast = head;
        
        while(fast->next!=NULL && fast->next->next!=NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
       auto first_half = head;
        auto second_half = reverse_list(slow->next);
        
        while(first_half && second_half) {
            if(first_half->val != second_half->val) {
                return false;
            }
            first_half = first_half->next;
            second_half = second_half->next;
        }
        return true;
    }
    ListNode*reverse_list(ListNode*head) {
        
        ListNode*next = NULL;
        ListNode*prev = NULL;
        
        while(head!=NULL) {
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
};
