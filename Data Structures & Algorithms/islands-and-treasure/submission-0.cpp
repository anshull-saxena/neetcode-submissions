class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int land = INT_MAX,dir[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};

        int row = grid.size(),col=grid[0].size();

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(!grid[i][j]){
                    q.push({i,j});
                }
            }
        }

        while(!q.empty()){
            pair<int,int> curr = q.front();
            q.pop();            

            int r = curr.first,c=curr.second;

            for(int i=0;i<4;i++){
                int currR = r+dir[i][1],currL=c+dir[i][0];
                if(currR >= 0 && currR < row && currL >= 0 && currL < col && grid[currR][currL] == land){
                    grid[currR][currL] = grid[r][c]+1;
                    q.push({currR,currL});
                }
            }
        }
    }
};
