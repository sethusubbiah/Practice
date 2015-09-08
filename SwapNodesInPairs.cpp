class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        
        int flag = 0;
        if (head == NULL)
            return head;
        
        ListNode *tmph = head;
        ListNode *tmp, *tone;
        
        while (tmph->next != NULL)
        {
            tmp = tmph->next;
            tmph->next = tmp->next;
            tmp->next = tmph;
            
            if (flag == 1)
                tone->next = tmp;
                
            if (flag == 0)
            {
                flag = 1;
                head = tmp;
            }
            
            if (tmph->next != NULL)
            {
                tone = tmph;
                tmph = tmph->next;
            }
            else
                break;
        }
        
        return head;
    }
};
