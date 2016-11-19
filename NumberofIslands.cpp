class Solution {
public:
    bool check(int x, int y, int row, int col){
        if(x<row && x>=0 && y<col && y>=0) return true;
        return false;
    }
    
    void dfs(vector<vector<char>>& grid, int x, int y, int row, int col){
        if(grid[x][y] == '0') return;
        grid[x][y] = '0';
        if(check(x-1, y, row, col)) dfs(grid, x-1, y, row, col);
        if(check(x+1, y, row, col)) dfs(grid, x+1, y, row, col);
        if(check(x, y-1, row, col)) dfs(grid, x, y-1, row, col);
        if(check(x, y+1, row, col)) dfs(grid, x, y+1, row, col);
    }
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[i].size(); j++){
                if(grid[i][j] == '1'){
                    
                    dfs(grid, i, j, grid.size(), grid[i].size());
                    count++;
                }
            }
        }
        return count;
    }
};
