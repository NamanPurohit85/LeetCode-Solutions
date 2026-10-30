class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> mp;
        int j; 
        for(int i = 0; i < s.size(); i++){
            mp[s[i]]++;
        }

        for(j = 0; j < t.size(); j++){
            if(mp.find(t[j]) == mp.end()) return t[j];
            mp[t[j]]--;

            if(mp[t[j]] < 0){
                break;
            }
        } 
        return t[j]; 
    }
};