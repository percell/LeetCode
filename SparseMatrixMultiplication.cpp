class Solution {
public:
    vector<vector<int>> multiply(vector<vector<int>>& A, vector<vector<int>>& B) {
        int row = A.size();
        int col = B[0].size();
       
        vector<vector<int>> sol;
        sol.resize(row, vector<int>(col, 0));
        for(int i=0; i<row; i++){
            
            for(int j=0; j<A[i].size(); j++){
                
          //      int ans=0;
                if(A[i][j]!=0){
                    for(int k=0; k<col; k++){
                        sol[i][k] += A[i][j]*B[j][k];
                    }
                }
       //         cout<<ans<<endl;
            //    sol[i][k] = ans;
                
            }
        }
        return sol;
    }
};
