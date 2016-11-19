int read4(char *buf);

class Solution {
public:
    /**
     * @param buf Destination buffer
     * @param n   Maximum number of characters to read
     * @return    The number of characters read
     */
    int read(char *buf, int n) {
        int mul = n/4;
        int mod = n%4;
        int sol = 0;
        for(int i=0; i<mul; i++){
            sol += read4(buf+sol);
        }
        if(mod){
            sol+= min(read4(buf+sol), mod);
        }
        return sol;
    }
};
