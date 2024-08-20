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
        ListNode* list = head;
        int length = 0;
        while(list != nullptr)
        {
            length++;
            list = list->next;
        }
        if(length == 1 && n == 1)
        {
            return nullptr;
        }
        if(length == n)
        {
            return head->next;
        }
        list = head;
        for(int i=0; i<length-n-1; i++)
        {
            list = list->next;
        }
        list->next = list->next->next;
        return head;
    }
};