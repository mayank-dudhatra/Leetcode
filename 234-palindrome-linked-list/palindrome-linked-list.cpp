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
ListNode* reverse(ListNode* head){
    ListNode* prev = nullptr;

    while(head){
        ListNode* newNode =  head->next;
        head->next = prev;
        prev = head;
        head = newNode;
    }
    return prev;
}
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next) return true;

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next && fast->next->next){
            fast = fast->next->next;
            slow = slow->next;
        }

        slow->next = reverse(slow->next);
        ListNode* secondhalf = slow->next;
        ListNode* firsthalf = head;

        while(secondhalf){
            if(firsthalf->val != secondhalf->val){
                return false;
            }
            firsthalf = firsthalf->next;
            secondhalf = secondhalf->next;
        }

        return true;
    }
};