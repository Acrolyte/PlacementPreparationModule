#include <bits/stdc++.h> 
/****************************************************************
#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
    vector<long> v;
    for(int i=0;i<n;i++)
        v.push_back(*(arr+i));
    
    int l = 0, r = n-1;
    long ans = 0;
    long ml = 0, mr = 0;
    while(l<=r){
        if(v[l] <= v[r]){
            if(v[l] >= ml) ml = v[l];
            else ans += ml - v[l];
            l++;
        }
        else {
            if(v[r] >= mr) mr = v[r];
            else ans += mr - v[r];
            r--;
        }
    }
    return ans;
}
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

void deleteNode(LinkedListNode<int> * node) {
    node->data = node->next->data;
    node->next = node->next->next;
}