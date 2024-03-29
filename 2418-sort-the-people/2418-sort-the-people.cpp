class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string> mp;
        
        for(int i = 0; i < names.size(); i++){
            mp[heights[i]] = names[i];
        }
        
        vector<string> v;
        for(auto it : mp){
            v.push_back(it.second);
        }
        
        reverse(begin(v),end(v));
        return v;
    }
};