#include <bits/stdc++.h> 
/********************************

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

********************************/


Node *rotate(Node *head, int k) {
    if(head == NULL or head->next == NULL or k==0) return head;
    Node* temp = head;
    int l = 1;
    while(temp->next!=NULL){
        l++;
        temp = temp->next;
    }
    temp->next = head;
    k = k%l;
    int e = l-k;
    while(e--) temp = temp->next;
    head = temp->next;
    temp->next = NULL;
    return head;
}