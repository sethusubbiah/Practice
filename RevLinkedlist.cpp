class Solution {
public:
    ListNode* reverseList(ListNode* head) {
            if (head ==NULL)
                return head;

            if (head->next == NULL)
                return head;
            
            ListNode* tmp = head->next;
            ListNode* tmp2;
            head->next = NULL;
            while (tmp->next != NULL)
            {
                tmp2 = tmp->next;
                tmp->next = head;
                head = tmp;
                tmp = tmp2;
            }
            
            tmp->next = head;
            head = tmp;
            
            return head;
    }
};
