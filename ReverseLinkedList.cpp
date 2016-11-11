tion for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* tmp = NULL;
        ListNode* cur = head;
        while(cur != NULL){
            ListNode* next  = cur->next;
            cur->next = tmp;
            tmp = cur;
            cur = next;
        }
        return tmp;
    }
};
