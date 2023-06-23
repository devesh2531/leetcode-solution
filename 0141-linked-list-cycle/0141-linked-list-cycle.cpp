/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==0 )
            return false;
        ListNode *f=head,*s=head;
        while(f&&f->next){
            s=s->next;
            f=f->next->next;
            if(f==s){
                return true;
            }
            
        }
        return false;
    }
};