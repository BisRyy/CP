class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> word; string ans = "";
        for(auto a: s){
            if(a==')'){
                string x="";
                while(word.top()!='('){
                    x+=word.top();
                    word.pop();
                }
                word.pop();
                
                for(int i=0; i<x.length();++i){
                    word.push(x[i]);
                }
                //ans = x;
            }
            else
                word.push(a);
            
        }
        stack<char> d;
        while(!word.empty()){
            d.push(word.top());
            word.pop();
        }
        while(!d.empty()){
            ans+=d.top();
            d.pop();
        }
    return ans;
    }
};
