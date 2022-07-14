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
int countNodes(Node* &n){
    Node* t = n;
    int s = 0;
    while(t!=NULL){
        s++;
        t = t->next;
    }
    return s;
}

int findIntersection(Node *fi, Node *se)
{
    int l1 = countNodes(fi), l2 = countNodes(se), d = 0;
    Node *ptr1, *ptr2;
    if(l1 > l2){
        d = l1 - l2;
        ptr1 = fi;
        ptr2 = se;
    } else{
        d = l2 - l1;
        ptr1 = se;
        ptr2 = fi;
    }
    for(int i=0;i<d;i++){
        ptr1 = ptr1->next;
        if(ptr1 == NULL) return -1;
    }
    while(ptr1 != NULL && ptr2!=NULL){
        if(ptr1 == ptr2) return ptr1->data;
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
}