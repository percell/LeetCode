class Solution {
public:
    bool isOneEditDistance(string s, string t) {
        if(s.length()> t.length()) return isOneEditDistance(t, s);
        
        if(s.length() == t.length()){
            bool one = false;
            for(int i=0; i<s.length(); i++){
                if(s[i]!=t[i]){
                    if(one) return false;
                    one = true;
                }
            }
            return one;
        }
        
        string tmp2 = s+t[t.length()-1];
        if(tmp2==t) return true;
        tmp2 = t[0]+s;
        if(tmp2==t) return true;
        
        for(int j=0; j<s.length(); j++){
            if(s[j]!=t[j]){
                string tmp = s.substr(0, j)+t[j]+s.substr(j,s.length()+1);
                cout<<tmp<<endl;
                if(tmp == t) return true;
                return false;
            }
        }
 
        return false;
        
    }
};
