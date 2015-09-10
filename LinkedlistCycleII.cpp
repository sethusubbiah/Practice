class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (head == NULL)
            return head;
        
        ListNode *tmp = head;

        while(tmp->next !=NULL)
        {
            if(tmp->next->val == std::numeric_limits<int>::max())
                return tmp->next;
            tmp->val = std::numeric_limits<int>::max();
            tmp = tmp->next;
        }        
        return NULL;
    }
};
