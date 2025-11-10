class Solution {
public:
    bool isValid(string s) {
        stack<char> m;
        for (auto c :s){
            if (c == '('||c == '['||c == '{'){
                m.push(c);
            }else{
                if (m.empty()) return false;
                char tar = m.top();
                m.pop();
                if (c == ')' && tar != '(' || c == ']' && tar != '[' || c == '}' && tar != '{') return false;
            }
        }
        if (m.empty()) return true;
        else return false;
    }
};