class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
       map<string,vector<string>>m;
       for(auto key : string_list)
       {
           string st = key;
           sort(st.begin(),st.end());
           m[st].push_back(key);
       }
       vector<vector<string>>res;
       for(auto key : m)
       {    
           vector<string>vec;
           auto ans = key.second;
           for(auto key1 : ans)
           {
               vec.push_back(key1);
           }
           res.push_back(vec);
       }
       return res;
    }
};