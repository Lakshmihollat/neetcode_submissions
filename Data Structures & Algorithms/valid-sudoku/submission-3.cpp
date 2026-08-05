class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> row[9], col[9], box[3][3];

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char c = board[i][j];
                if (c == '.') continue;

                // Check row
                if (row[i].count(c)) return false;
                row[i].insert(c);

                // Check column
                if (col[j].count(c)) return false;
                col[j].insert(c);

                // Check 3x3 box
                if (box[i / 3][j / 3].count(c)) return false;
                box[i / 3][j / 3].insert(c);
            }
        }
        return true;
    }
};
