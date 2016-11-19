declaration for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* root = new ListNode(0);
        ListNode* tmp = root;
        while(l1 != NULL || l2 != NULL){
            if(l1 != NULL && l2 != NULL){
                int sum = l1->val + l2-> val + carry;
                carry = (int) sum/10;
          //      cout << carry << endl;
                root->val = sum%10;
                l1 = l1->next;
                l2 = l2->next;
            }
            else if(l1 != NULL){
                int sum = l1->val + carry;
                carry = (int) sum/10;
                root->val = sum%10;
                l1 = l1->next;
            }
            else if(l2 != NULL){
                int sum = l2->val + carry;
                carry = (int) sum/10;
                root->val = sum%10;
                l2 = l2->next;
            }
            if(l1!=NULL || l2!=NULL || carry>=1){
                 root->next = new ListNode(carry);
                 root = root->next;
            }
            else return tmp;
               
        }
       
        return tmp;
    }
};
