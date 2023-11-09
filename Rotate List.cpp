//61. Rotate List


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

    //time limit exceeds
    /*
    int ListLength(ListNode* head){
        int len = 1;
        while(head->next != nullptr){
            len++;
            head = head->next;
        }

        return len;
    }
    */
    ListNode* rotateRight(ListNode* head, int k) {
        
         if(!head || !head->next || k==0) return head;

         ListNode* tail;
         int length = 1;

         for(tail=head; tail->next; tail = tail->next) length++;

         //make a loop
         tail->next = head;

         //how many nodes from end to be moved
         int e = length-k%length;

         for(int i=0;i<e;i++) tail = tail->next;

         ListNode* newHead = tail->next;
         tail->next = NULL;

         return newHead;
        /*
        //time limit exceeds
        if(!head == nullptr || head->next == NULL) return head;

        int leng = ListLength(head);

        k %= leng;

        for(int i=1; i<=k; k++){
            ListNode* tail = head;
            ListNode* prevTail = NULL;

            //get to last node
            while(tail->next != NULL){
                prevTail = tail;
                tail = tail->next;
            }

            //make last node as head
            tail->next = head;
            prevTail->next = NULL;
            head = tail;
        }

        return head;
        */
    }
};