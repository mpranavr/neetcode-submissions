class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> row(9);
        vector<unordered_set<char>> col(9);
        vector<unordered_set<char>> box(9);

        for(int r = 0;r<9;r++){
            for(int c = 0;c<9;c++){
                char num = board[r][c];

                if(num == '.'){
                    continue;
                }

                for(auto& val:row[r]){
                    if(val==num){
                        return false;
                    }
                }

                for(auto& s:col[c]){
                    if(s==num){
                        return false;
                    }
                }

                int boxed = (r/3)*3 + (c/3);
                for(auto& e:box[boxed]){
                    if(e==num){
                        return false;
                    }
                }

                row[r].insert(num);
                col[c].insert(num);
                box[boxed].insert(num);
            }
        }
        return true;

    }
};