class Solution {
    void solve(vector<vector<int>>& maze, int n, int row, int col, string& path, vector<string>& ans) {
      
        if (row == n - 1 && col == n - 1) {
            ans.push_back(path);
            return;
        }
         // visited
        maze[row][col] = 0; 

        // down
        if (row + 1 < n && maze[row + 1][col] == 1) {
            path.push_back('D');
            solve(maze, n, row + 1, col, path, ans);
            path.pop_back();
        }
        // up
        if (row - 1 >= 0 && maze[row - 1][col] == 1) {
            path.push_back('U');
            solve(maze, n, row - 1, col, path, ans);
            path.pop_back();
        }
        // left
        if (col - 1 >= 0 && maze[row][col - 1] == 1) {
            path.push_back('L');
            solve(maze, n, row, col - 1, path, ans);
            path.pop_back();
        }
        // right
        if (col + 1 < n && maze[row][col + 1] == 1) {
            path.push_back('R');
            solve(maze, n, row, col + 1, path, ans);
            path.pop_back();
        }

        maze[row][col] = 1; 
    }

public:
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        vector<string> ans;
        int n = maze.size();
        if (maze[0][0] == 0 || maze[n - 1][n - 1] == 0) return ans;
        string path = "";
        solve(maze, n, 0, 0, path, ans);
        sort(ans.begin(), ans.end()); 
        return ans;
    }
};