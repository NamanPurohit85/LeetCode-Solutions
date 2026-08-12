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
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;
        ListNode* prev = head;
        ListNode* curr = prev->next;
        ListNode* next = curr->next;

        while(curr->next != nullptr){
            curr->next = next->next;
            next->next = prev->next;
            prev->next = next;

            //updation
            curr = curr->next;
            prev = next;
            if (curr != nullptr){
                next = curr->next;
            }else{
                break;
            }
        }
        return head;
    }
};