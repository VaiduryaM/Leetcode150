//117. Populating Next Right Pointers in Each Node II

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    /*
    //doesnt work because null of sub nodes isnt handled
    void connectSub(Node* a, Node*b){
        if(a== nullptr) return;

        a->next = b;
        connectSub(a->left, a->right);
        connectSub(b->left, b->right);
        connectSub(a->right, b->left);

    }
    */
    Node* connect(Node* root) {

        /*
        if(root == nullptr) return root;

        connectSub(root->left, root->right);

        return root;
        */

        Node *pop = root;

        while(pop){
            Node dummy(0);

            for(Node* needle=&dummy; pop; pop = pop->next){
                if(pop->left){
                    needle->next = pop->left;
                    needle = needle->next;
                }
                if(pop -> right){
                    needle ->next = pop->right;
                    needle = needle ->next;
                }
            }
            pop = dummy.next; //dummy handling of next
        }

        return root;

    }
};