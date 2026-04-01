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
    ListNode* swapNodes(ListNode* head, int k) {
        int len = 0;
        ListNode*  temp = head;

        while(temp!=nullptr){
            
            temp = temp->next;
            len++;
        }

        int count = 1;
        ListNode* front = nullptr;
        ListNode* back = nullptr;
        ListNode* curr = head;

        while(curr){
            if(count == k){
                front = curr;
            }
            if(count == len-k+1){
                back = curr;
            }
            count++;
            curr = curr->next;
        }

        if(front && back){
            int tmp = front->val;
            front->val = back->val;
            back->val = tmp;
        }
        return head;
      
    }
};