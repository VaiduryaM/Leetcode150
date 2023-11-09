//19. Remove Nth Node From End of List


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
    
    /*ListNode* getNode(ListNode* head,int n){

        ListNode *cur = head;
        for(int i =0; i<n && cur; i++){
            cur = cur->next;
        }
        return cur;
    }*/
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        //1. Take two pointers – fast and slow. And initialize their values as head node
        //2. Iterate fast pointer till the value of n.
        //3. Now, start iteration of fast pointer till the null value of the linked list. Also, iterate slow pointer.
        //4. Hence, once the fast pointer will reach to the end the slow pointer will reach the node which you want to delete.
        //5. Replace the next node of the slow pointer with the next to next node of the slow pointer.
        ListNode *slow = head;
        ListNode *fast = head;

        for(int i =0; i<n; i++){
            fast = fast->next;
        }
        //If the fast pointer reaches the end of the list (NULL), it means n is equal to the length of the list.
        // In this case, we remove the head node and return the new head (the second node).
        while(fast == NULL){
            head = head->next;
            return head;
        }

        while(fast->next != NULL){
            slow = slow->next;
            fast = fast->next;
        }

        slow->next = slow->next->next;
        return head;




        /*
        //stupid solution
        ListNode *l = head;
        int len = 0;
        while(l != nullptr){
            len++;
            l = l->next;
        }
        int fromFirst = len - n + 1;
        ListNode *cur = getNode(head, fromFirst);
        if(cur == nullptr) return nullptr;

        ListNode *next = cur->next;

        if(n == 0){
            head = next;
        }else{
            ListNode *prev = getNode(head, fromFirst-2);
            prev->next = next;
        }

        return head;
        */

        
    }
};