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
    ListNode* middleNode(ListNode* head) {
        ListNode *resultS = head;
        int i = 1;
        do  {
            if(!(i%2))
            resultS = resultS->next;
            head = head->next;
            i++;
        }
        while(head!=nullptr);
        return resultS;
    }
};