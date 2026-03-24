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
    ListNode* doubleIt(ListNode* head) {
        ListNode* temp = head;
        ListNode* result = nullptr;

        int carry = 0;
        stack<int> st;

        while(temp!=nullptr){
            st.push(temp->val);
            temp = temp->next;
        }

        while(!st.empty()){
            int a = st.top();
            st.pop();


            int value = (a*2)+carry;
            int digit = value%10;
            carry = value/10;

            ListNode* newNode = new ListNode(digit);
            newNode->next = result;
            result = newNode;
        }

        if(carry>0){
                ListNode* newNode = new ListNode(carry);
                newNode->next = result;
                result = newNode;
        }

        return result;

    }
};