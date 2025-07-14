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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr) return sortList(list2);
        if (list2 == nullptr) return sortList(list1);
        ListNode* curr = list1;
        while (curr->next != nullptr) {
            curr = curr->next;
        }
        curr->next = list2;
        return sortList(list1);
    }

    ListNode* sortList(ListNode* head) {
        if (!head || !head->next) return head;

        bool swapped;
        do {
            swapped = false;
            ListNode* curr = head;
            while (curr->next != nullptr) {
                if (curr->val > curr->next->val) {
                    std::swap(curr->val, curr->next->val);
                    swapped = true;
                }
                curr = curr->next;
            }
        } while (swapped);

        return head;
    }
};
