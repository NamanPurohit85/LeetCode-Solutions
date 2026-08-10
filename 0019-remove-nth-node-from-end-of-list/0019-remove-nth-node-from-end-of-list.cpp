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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int count = 0;

        while (temp) {
            count++;
            temp = temp->next;
        }

        int del = count - n + 1;

        if (del == 1) {
            head = head->next;
            return head;
        }

        temp = head;
        while (del != 2) {
            temp = temp->next;
            del--;
        }
        if (temp->next->next != NULL) {
            temp->next = temp->next->next;
        }else{
            temp->next = NULL;
        }

        return head;
    }
};