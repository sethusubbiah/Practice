class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL)
            return head;
        
        if(head->next == NULL)
            return head;
        
        ListNode *t,*t2;
        
        t=head;
        t2 = head->next;
        
        while (t2->next != NULL)
        {
            if(t->val == t2->val)
            {
                t2 = t2->next;
                t->next = t2;
                continue;
            }
            
            t=t->next;
            t2=t2->next;
        }
        
        if(t->val == t2->val)
            t->next = t2->next;
        
        return head;
    }
};
