//92. Reverse Linked List II

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

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode dummy(0);
        dummy.next = head;

        ListNode* main = &dummy;
        
        for(int i=1; i<left; i++){
            main = main->next;
        }      

        ListNode* cur = main->next;
        ListNode* prev = nullptr;

        for(int i=left; i<=right; i++){            
            ListNode* temp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = temp;
            //if(cur->val == right) break;
        }

        main->next->next = cur;
        main->next = prev;

        return dummy.next;

        
    }
};