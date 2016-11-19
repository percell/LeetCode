class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>pascal;
        for(int i=0; i<numRows; i++){
            vector<int> level;
            if(i==0){ 
                level = {1};
            }
            else{
                vector<int> tmp = pascal[i-1];
                level.push_back(1);
                for(int it = 0; it<tmp.size()-1; it++){
                    int c = tmp[it] + tmp[it+1];
                    level.push_back(c);
                }
                level.push_back(1);
            }
            pascal.push_back(level);
        }
        return pascal;
    }
};
