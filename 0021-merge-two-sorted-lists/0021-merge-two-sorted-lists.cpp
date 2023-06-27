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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        ListNode *h,*t;
        if(l1->val>=l2->val){
            h=t=l2;
            l2=l2->next;
        }
        else{
          h=t=l1;
            l1=l1->next;
        }
        while(l1!=0&&l2!=0){
            if(l1->val<=l2->val){
                t->next=l1;
                t=l1;
                l1=l1->next;   
            }
            else{
                 t->next=l2;
                t=l2;
                l2=l2->next;
            }
        }
        if(l1==NULL)
            t->next=l2;
        else 
            t->next=l1;
        return h;
    }
};