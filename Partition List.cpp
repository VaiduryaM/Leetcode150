//86. Partition List


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

        ListNode less_head(0);  // Dummy node for values less than x.
        ListNode great_head(0); // Dummy node for values greater than or equal to x.

        ListNode* less = &less_head;
        ListNode* great = &great_head;

        while (head) {
            if (head->val < x) {
                less->next = head;
                less = less->next;
            } else {
                great->next = head;
                great = great->next;
            }
            head = head->next;
        }

        // Connect the two partitions and ensure the last node's next is set to nullptr.
        less->next = great_head.next;
        great->next = nullptr;

        return less_head.next;
        /*
        //no proper initialization; no need of part and value
        ListNode* part = head;
        for(int i=0; i<x; i++){
            part = part->next;
        }
        
        int value = part->val;
        ListNode dummy(0);
        dummy.next = head;

        ListNode* less = nullptr;
        ListNode* great = nullptr;

        while(head){
            if(head->val < value) less->next = head;
            else great->next = head;

            head = head->next;

        }
        return dummy.next;

        */
    }
};