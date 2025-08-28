class Solution {
public:
    bool space(vector<vector<char>>& board, int r, int c, char k) {
        for (int col = 0; col < 9; col++) {
            if (board[r][col] == k) return false;
        }
        for (int row = 0; row < 9; row++) {
            if (board[row][c] == k) return false;
        }
        int startRow = 3 * (r / 3), startCol = 3 * (c / 3);
        for (int i = startRow; i < startRow + 3; i++) {
            for (int j = startCol; j < startCol + 3; j++) {
                if (board[i][j] == k) return false;
            }
        }
        return true;
    }

    bool fillsudoku(vector<vector<char>>& board, int r, int c) {
        if (r == 9) return true; 

        if (c == 9) return fillsudoku(board, r + 1, 0);

        if (board[r][c] != '.') return fillsudoku(board, r, c + 1);

        for (char k = '1'; k <= '9'; k++) {
            if (space(board, r, c, k)) {
                board[r][c] = k;
                if (fillsudoku(board, r, c + 1)) return true;
                board[r][c] = '.';
            }
        }

        return false;
    }
    
    void solveSudoku(vector<vector<char>>& board) {
        fillsudoku(board, 0, 0);
    }
};