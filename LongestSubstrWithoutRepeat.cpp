class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max = 0;
        int i = 0;
        int j = 0;
        int table[128];
        memset(table, 0, 128*sizeof(int));
        int len = 0;
        while(i<s.length()){
            if(i > 0){
                table[(int)s[i-1]] = 0;
                len--;
            }
            while(j<s.length() && table[(int)s[j]]==0){
                len++;
                table[(int)s[j]] = 1;
                j++;
            }
            if(len > max) max = len;
            i++;
        }
        return max;
    }
};
