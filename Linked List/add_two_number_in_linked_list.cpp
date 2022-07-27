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
        
        ListNode*dummy = new ListNode();
        
        ListNode*temp = dummy;
        
        int carry = 0;
        
        while(l1 != NULL || l2 != NULL || carry) {
            int sum = 0;
            if(l1!=NULL) {
                sum += l1->val;
                l1 = l1->next;
            }
            
            if(l2!=NULL) {
                sum += l2->val;
                l2 = l2->next;
            }
            
            sum += carry;
            carry = sum/10;
            ListNode*node = new ListNode(sum%10);
           temp->next = node; // these line is for traversing 
         temp = node;// these line of code is for storing the answer
        }
        return dummy->next;
    }
};
// ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
//     ListNode preHead(0), *p = &preHead;
//     int extra = 0;
//     while (l1 || l2 || extra) {
//         int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + extra;
//         extra = sum / 10;
//         p->next = new ListNode(sum % 10);
//         p = p->next;
//         l1 = l1 ? l1->next : l1;
//         l2 = l2 ? l2->next : l2;
//     }
//     return preHead.next;
// }
