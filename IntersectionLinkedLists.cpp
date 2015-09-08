class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode *hA = headA, *hB = headB;
        if (hA == NULL || hB == NULL)
            return NULL;
        std::unordered_map<long, int> mymap;
        do
        {
            mymap.insert(std::make_pair<long,int>((long)hA, 1));
            if(hA->next == NULL)
                break;
            else
                hA = hA->next;
        }while(1);
        
        do
        {
            std::unordered_map<long,int>::const_iterator got = mymap.find ((long)hB);

            if ( got != mymap.end() )
                return hB;
            
            if (hB->next == NULL)
                break;
            else
                hB = hB->next;
        }while(1);
        
        return NULL;
    }
};
