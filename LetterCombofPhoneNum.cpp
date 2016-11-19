class Solution {
public:
    vector<string> letterCombinations(string digits) {
        
        vector<string> output;
        if(digits.length()<1) return output;
        string charmap[]={"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        backTrack("", digits, charmap, output, 0);
        return output;
    }
    
    void backTrack(string comb, string digits, string charmap[], vector<string>& output, int start){
        if(comb.length()==digits.length()){
            output.push_back(comb);
            return;
        }
 
        string cur = charmap[digits[start]-'0'];
        for(int i=0; i<cur.length(); i++){
            backTrack(comb+cur[i], digits, charmap, output, start+1);
        }
    }
};
