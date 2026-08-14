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
    ListNode* partition(ListNode* head, int x) {
        ListNode* smallHead = nullptr;
        ListNode* smallTail = nullptr;
        ListNode* largeHead = nullptr;
        ListNode* largeTail = nullptr;

        while (head != nullptr) {
            ListNode* next = head->next;

            if (head->val < x) {
                if (smallHead == nullptr) {
                    smallHead = head;
                    smallTail = head;
                } else {
                    smallTail->next = head;
                    smallTail = head;
                }
            } else {
                if (largeHead == nullptr) {
                    largeHead = head;
                    largeTail = head;
                } else {
                    largeTail->next = head;
                    largeTail = head;
                }
            }
            head = next;
        }
        if (smallHead == nullptr) {
            return largeHead;
        }
        smallTail->next = largeHead;

        if (largeTail != nullptr) {
            largeTail->next = nullptr;
        }
        return smallHead;
    }
};