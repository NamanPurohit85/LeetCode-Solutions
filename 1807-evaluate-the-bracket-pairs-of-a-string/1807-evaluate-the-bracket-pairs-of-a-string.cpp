class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        unordered_map<string, string> mp;
        mp.reserve(knowledge.size());
        for (const auto& pair : knowledge) {
            mp[pair[0]] = pair[1];
        }

        string res = "";
        res.reserve(s.size());

        string key = "";
        bool inside = false;

        for (char c : s) {
            if (c == '(') {
                inside = true;
                key.clear();
            } else if (c == ')') {
                inside = false;
                auto it = mp.find(key);
                if (it != mp.end()) {
                    res += it->second;
                } else {
                    res += '?';
                }
            } else if (inside) {
                key += c;
            } else {
                res += c;
            }
        }

        return res;
    }
};