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

Node *firstNode(Node *head)
{
    if(head == NULL or head->next == NULL) return NULL;
    Node *fast = head, *slow = head, *entry = head;
    while(fast->next != NULL and fast->next->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            while(slow!=entry){
                slow = slow->next;
                entry = entry->next;
            }
            return slow;
        }
    }
    return NULL;
}