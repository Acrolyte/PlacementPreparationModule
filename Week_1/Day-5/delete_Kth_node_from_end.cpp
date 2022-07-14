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

LinkedListNode<int>* removeKthNode(LinkedListNode<int> *head, int K)
{
    LinkedListNode<int>* dummy = new LinkedListNode<int>(0);
    LinkedListNode<int> *slow = dummy, *fast = dummy;
    dummy->next = head;
    if(head == NULL or K==0) return head;
    for(int i=1;i<=K;i++)
        fast = fast->next;
    while(fast->next!=NULL){
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = slow->next->next;
    return dummy->next;
}