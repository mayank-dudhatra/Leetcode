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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> ans(2, -1);
        vector<int> temp;
        int count = 1;

        if (!head || !head->next || !head->next->next)
            return ans;

        ListNode* low = head;
        ListNode* mid = head->next;
        ListNode* high = head->next->next;

        while (high != nullptr) {
            if ((mid->val < low->val && mid->val < high->val) ||
                (mid->val > low->val && mid->val > high->val)) {
                temp.push_back(count);
            }

            count++;
            low = low->next;
            mid = mid->next;
            high = high->next;
        }

        if (temp.size() < 2)
            return ans;

        int minDist = INT_MAX;

        for (int i = 1; i < temp.size(); i++) {
            minDist = min(minDist, temp[i] - temp[i - 1]);
        }

        ans[0] = minDist;
        ans[1] = temp.back() - temp.front();

        return ans;
    }
};