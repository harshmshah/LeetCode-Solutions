/*Reverse a singly linked list.*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
      if (head == NULL)
        return NULL;
      ListNode *curr = head;
      ListNode *prev = NULL;
      ListNode *temp = head->next;
      while (curr != NULL) {
        curr -> next = prev;
        prev = curr;
        curr = temp;
        if (temp != NULL)
          temp = temp->next;
      }
      head = prev;
      return head;
    }
};