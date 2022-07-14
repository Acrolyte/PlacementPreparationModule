#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
	        Node *next;
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
        };

*****************************************************************/
Node *addlists(Node* &l1, Node* &l2, int carry){
    Node *res = new Node(0);
    if(l1 == NULL and l2 == NULL){
        if(carry != 0){
            res->data = carry;
            return res;
        }
        return NULL;
    }
    if(l1 == NULL){
        res->data = l2->data + carry;
        carry = 0;
        if(res->data >= 10){
            carry = res->data / 10;
            res->data %= 10;
        }
        res->next = addlists(l1,l2->next,carry);
    }
    if(l2 == NULL){
        res->data = l1->data + carry;
        carry = 0;
        if(res->data >= 10){
            carry = res->data / 10;
            res->data %= 10;
        }
        res->next = addlists(l1->next,l2,carry);
    }
    if(l1 != NULL && l2 !=NULL){
        res->data = l1->data + l2->data + carry;
        carry = 0;
        if(res->data >= 10){
            carry = res->data /10;
            res->data %= 10;
        }
        res->next = addlists(l1->next,l2->next,carry);
    }
    return res;
}

Node *addTwoNumbers(Node *head1, Node *head2)
{
    Node* res = addlists(head1,head2,0);
    return res;
}