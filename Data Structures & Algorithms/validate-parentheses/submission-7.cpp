class Solution {
public:
    bool isValid(string s) {
        stack<char> stck;
        unordered_map<char,char> closeOpen={
            {')', '('},
            {'}', '{'},
            {']', '['}
        };
        for (char c : s){
            if (closeOpen.count(c)){
                if (!stck.empty() && stck.top() == closeOpen[c])
                    stck.pop();
                else
                    return false;
            }
            else
                stck.push(c);
        }
        return (stck.empty());
    }
};
