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
    ListNode* deleteDuplicates(ListNode* head) {
        
        auto iter = head;
        while(iter) {
            auto next_distinct_element = iter->next; // moving to the next element
            
            while(next_distinct_element&& next_distinct_element->val == iter->val) {
                next_distinct_element = next_distinct_element->next;
            }
            iter->next = next_distinct_element; // making links 
                iter = next_distinct_element;  // moving iter to next position
        }
        return head;
    }
};
