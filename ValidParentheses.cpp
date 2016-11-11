ass Solution {
public:
    bool isValid(string s) {
        stack<char> ss; 
        map<char, char> mm;
        mm[')'] = '(';
        mm[']'] = '[';
        mm['}'] = '{';
        for(int i = 0; i < s.length(); i++){
            if(s[i]== '(' || s[i]=='[' || s[i]=='{'){
                ss.push(s[i]);
            }
            else if(s[i]== ')' || s[i]==']' || s[i]=='}'){
                if(ss.size()<=0) return false;
                char match = mm[s[i]];
                if(ss.top() == match){
                    ss.pop();
                }
                else return false;
            }
        }
        if(ss.size()>0) return false;
        return true;
    }
};
