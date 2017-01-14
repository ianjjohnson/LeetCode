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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* ret = nullptr;
        ListNode* tmp = nullptr;

        int carry = 0;
        int sum = 0;

        int v1, v2;

        while(l1 || l2){

            if(l1) v1 = l1->val;
            else   v1 = 0;

            if(l2) v2 = l2->val;
            else   v2 = 0;

            sum = v1 + v2 + carry;
            carry = (int) (sum >= 10);

            if(!ret){
                ret = new ListNode(sum%10);
                tmp = ret;
            } else {
                tmp->next = new ListNode(sum%10);
                tmp = tmp->next;
            }

            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;

        }

        if(carry) tmp->next = new ListNode(1);

        return ret;

    }
};
