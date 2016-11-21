class Solution {
public:
    string minWindow(string s, string t) {
        map<char, int> mm;
        for(char c:t) mm[c]++;
        
        int minLen = 1e9;
        int start = 0;
        int count = 0;
        string solution = "";
        for(int i=0; i<s.size(); i++){
            
            if(mm[s[i]]>0) {
                count++;
            }
            mm[s[i]]--;
            
            while(count == t.size()){
                int curLen = i+1-start;
                if(minLen > curLen){
                    minLen = curLen;
                    solution = s.substr(start, minLen);
                //    cout<<s.substr(start, minLen);
                }
                if(mm[s[start]] == 0){
                    count --;
                }
                mm[s[start]]++;
                start++;
            }
        }
        return solution;
    }
};
