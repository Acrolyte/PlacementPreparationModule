#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
LinkedListNode<int> *reverse(LinkedListNode<int> *he){
    LinkedListNode<int>* pre = NULL , *nex = NULL;
    while(he!=NULL){
        nex = he->next;
        he->next = pre;
        pre = he;
        he = nex;
    }
    return pre;
}
bool isPalindrome(LinkedListNode<int> *head) {
    if(head==NULL or head->next==NULL) return true;
    LinkedListNode<int>* sl = head, *fa = head;
    while(fa->next!=NULL and fa->next->next!=NULL){
        sl = sl ->next;
        fa = fa ->next->next;
    }
    sl->next = reverse(sl->next);
    sl = sl->next;
    LinkedListNode<int> *dmy = head;
    while(sl!=NULL){
        if(dmy->data != sl->data) return false;
        dmy = dmy->next;
        sl = sl->next;
    }
    return true;
}