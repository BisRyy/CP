class Solution {
public:
    bool isValid(string s) {
        stack<char> c;
        for(int i=0;i<s.size();i++){
            if(s[i]==')' || s[i]==']' || s[i]=='}'){
                if (c.empty())
                    return false;
                else if(s[i]=='}' && c.top()!='{')
                    return false;
                else if(s[i]==')' && c.top()!='(')
                    return false;
                else if(s[i]==']' && c.top()!='[')
                    return false;
                else
                    c.pop();
            }else if(s[i]=='(' || s[i]=='[' || s[i]=='{')
                    c.push(s[i]);
            
        }
    if(c.empty())
        return true;
    else
        return false;
    }
};
