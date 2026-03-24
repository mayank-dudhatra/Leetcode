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
    int finde(ListNode* temp, int v){
        ListNode* temp1 = temp;

        while(temp1 != nullptr){
            if(temp1->val > v){
                return temp1->val;
            }
            temp1 = temp1->next;
        }
        return 0;
    }
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* l = head;
        vector<int> result;

        while(l != nullptr){
            result.push_back(finde(l->next, l->val));
            l = l->next;
        }

        return result;
    }
};