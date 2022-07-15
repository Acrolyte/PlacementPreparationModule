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
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* pre = NULL, *cur = head, *nx;
        int c=0;
        // cout<<head->val<<' ';
        while(cur!=NULL && c<k){
            nx = cur->next;
            cur->next = pre;
            pre = cur;
            cur = nx;
            c++;
        }   
        c=0;
        while(c<k && cur!=NULL){
            cur = cur->next;
            c++;
        }
        // cout<<c<<endl;
        if(c<k){
            head->next = nx;
        }
        else if(nx != NULL){
            head->next = reverseKGroup(nx,k);
        }
        return pre;
    }
};