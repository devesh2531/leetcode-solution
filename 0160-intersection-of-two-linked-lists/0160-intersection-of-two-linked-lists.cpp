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
    int len(ListNode *n){
        int c=0;
        while(n){
            n=n->next;
            c++;
        }
        return c;
    }
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        if(head1==0||head2==0)
            return NULL;
        int l1=len(head1),l2=len(head2);
        ListNode *p1=head1;
        for(int i=0;i<l1;i++){
            ListNode *p2=head2;
            for(int j=0;j<l2;j++){
                if(p1==p2)
                    return p1;
                p2=p2->next;
            }
            p1=p1->next;
        }
        return NULL;
    }
};