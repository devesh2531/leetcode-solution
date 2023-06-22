class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *slow = head;
        ListNode *fast = head;
        
        // Move the fast pointer n nodes ahead
        for (int i = 0; i < n; i++) {
            if (fast == nullptr) {
                // The given n is greater than the length of the linked list
                return head;
            }
            fast = fast->next;
        }
        
        // If the fast pointer reaches the end, remove the head node
        if (fast == nullptr) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        
        // Move both pointers until the fast pointer reaches the end
        while (fast->next) {
            slow = slow->next;
            fast = fast->next;
        }
        
        // Remove the nth node from the end
        ListNode* nodeToRemove = slow->next;
        slow->next = slow->next->next;
        delete nodeToRemove;
        
        return head;
    }
};
