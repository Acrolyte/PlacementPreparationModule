#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

class Node {
public:
	int data;
	Node* next;
	Node* child;

	Node(int data) {
		this->data = data;
		this->next = NULL;
		this->child = NULL;
	}
};

*****************************************************************/
Node* mergeTwoLists(Node *a, Node *b){
    Node *tmp = new Node(0), *res = tmp;
    while(a!=NULL and b!=NULL){
        if(a->data < b->data){
            tmp->child = a;
            tmp = tmp->child;
            a = a->child;
        } else {
            tmp->child = b;
            tmp = tmp->child;
            b = b->child;
        }
    }
    if(a) tmp->child = a;
    else tmp->child = b;
    return res->child;
}

Node* flattenLinkedList(Node* head) 
{
    if(head == NULL or head->next == NULL) return head;
    head->next = flattenLinkedList(head->next);
    head = mergeTwoLists(head,head->next);
    return head;
}
