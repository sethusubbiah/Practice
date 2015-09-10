class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        if (head == NULL)
            return true;
            
        if (head->next == NULL)
            return true;
        
        ListNode *th=head, *thd=head->next;
        
        std::vector<int> contents;
        contents.push_back(th->val);
        int csize = 0;
        
        
        while (thd->next != NULL)
        {
            if(thd->next->next == NULL)
                break;
            thd = thd->next->next;
            th = th->next;
            contents.push_back(th->val);
            csize++;
        }
        
        if (thd->next == NULL )
            th = th->next;
        else
            th = th->next->next;
        do
        {
            if(th->val!=contents.at(csize))
                return false;
            
            csize--;
            
            if (th->next == NULL)
                break;
            else
                th = th->next;
        }while(1);
        
        return true;
    }
};
