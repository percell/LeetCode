ass Solution {
public:
    int numDecodings(string s) {
        if(s.length()==0) return 0;
        
        int look[s.length()+1];
        memset(look, 0, sizeof(look));
        look[0] = 1;
        
        for(int i=1; i<s.length()+1; i++){
            int tmp = stoi(s.substr(i-1,1));
            if(tmp!=0) look[i]+=look[i-1];
            if(i>1){
                int tmp2 = stoi(s.substr(i-2, 2));
                if(tmp2<=26 && tmp2>=10) look[i]+=look[i-2];
            }
        }
        
        return look[s.length()];
    }
    
   
   
};
