//141. Linked List Cycle


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
    bool hasCycle(ListNode *head) {
        //Two pointer approach
        //1. If there is no cycle, the fast pointer will stop at the end of the linked list.
        //2. If there is a cycle, the fast pointer will eventually meet with the slow pointer.
        if(head == NULL) return false;

        ListNode *slow = head;
        ListNode *fast = head->next;

        while(slow != fast){
            if(fast == NULL || fast->next == NULL) return false;

            slow = slow->next;
            fast = fast->next->next;
        }
        
        return true;
        
    }
};