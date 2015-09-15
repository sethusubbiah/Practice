class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        if (l2 == NULL)
            return l1;
        if (l1 == NULL)
            return l2;
        
        ListNode *mrgList, *secList, *tmp, *ret;
        
        if (l1->val>l2->val)
        {
            mrgList = l2;
            secList = l1;
        }
        else
        {
            mrgList = l1;
            secList = l2;
        }
        
        ret = mrgList;
        
        while (mrgList->next !=NULL && secList != NULL)
        {
            if(mrgList->next->val<secList->val)
            {
                mrgList = mrgList->next;
                continue;
            }
            
            tmp = secList->next;
            secList->next = mrgList->next;
            mrgList->next = secList;
            secList = tmp;
            mrgList = mrgList->next;
        }
        
        if (secList != NULL)
        {
            mrgList->next = secList;
        }
        
        return ret;
    }
};
