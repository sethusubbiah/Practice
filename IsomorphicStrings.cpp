class Solution {
public:
    bool isIsomorphic(string s, string t) {
       std::unordered_map<char,char> mapping;
       std::unordered_map<char,char> revmapping;

       string::iterator fit = s.begin();
       string::iterator sit = t.begin();

       while (fit != s.end())
       {
           std::unordered_map<char,char>::const_iterator mit = mapping.find(*fit);
           std::unordered_map<char,char>::const_iterator rit = revmapping.find(*sit);
           if(mit == mapping.end())
                mapping.insert(std::make_pair(*fit,*sit));
           if(rit == revmapping.end())
                revmapping.insert(std::make_pair(*sit,*fit));

           if ( mit != mapping.end())
           {
               if(mit->second != *sit )
                    return false;
           }
           if(rit != revmapping.end())
           {
                if(rit->second != *fit)
                    return false;
           }
           ++fit;
           ++sit;
       }

       return true;
    }
};
