class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int me = nums[0], mec = 1;
        std::unordered_map<int, int> mymap;
        
        for (auto i: nums)
        {
            std::unordered_map<int, int>::const_iterator got = mymap.find(i);
            
            if(got == mymap.end())
                mymap.insert(std::make_pair<int,int>((int)i,1));
            else
            {
                mymap[i]++;
                if ((got->second+1) > mec)
                {
                    me = got->first;
                    mec = got->second;
                }
            }
        }
        
        return me;
        
        
    }
};
