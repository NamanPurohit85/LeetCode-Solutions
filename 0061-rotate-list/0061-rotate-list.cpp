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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp = head;
        int count = 1;
        if (temp == nullptr || temp->next == nullptr)
            return head;

        while (temp->next != nullptr) {
            count++;
            temp = temp->next;
        }
        if (count == k) {
            return head;
        }
        temp->next = head;
        temp = temp->next;

        k = count - 1 - k % count;
        while (k--) {
            temp = temp->next;
        }
        ListNode* newHead = temp->next;
        temp->next = nullptr;
        return newHead;
    }
};