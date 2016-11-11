ass Solution {
public:
    string reverseString(string s) {
        if(s.length() <=1) return s;
        for(int i=s.length()-1; i>=s.length()/2; i--){
            int j = s.length()-1-i;
            int tmp = s[j];
            s[j] = s[i];
            s[i] = tmp;
        }
        return s;
    }
};
