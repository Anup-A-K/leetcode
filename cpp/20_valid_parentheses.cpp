class Solution {
public:
    bool isValid(string s) {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        stack<char> para;
        for(char c : s) 
        {
            if(c == '(' || c == '[' || c == '{') 
            {
                para.push(c);
            } 
            else 
            {
                if(para.empty()) {
                    return false;
                }
                if(c == ')' && para.top() != '(') {
                    return false;
                }
                if(c == ']' && para.top() != '[') {
                    return false;
                }
                if(c == '}' && para.top() != '{') {
                    return false;
                }
                para.pop();
            }
        }
        return para.empty();
    }
};