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
    void deleteNode(ListNode* node) {
        
         ListNode *temp = node->next;
        
      node->val = temp->val; //copy the val
      
      node->next = temp->next; // link the next node
        delete(temp);  // free the memory
    }
};
