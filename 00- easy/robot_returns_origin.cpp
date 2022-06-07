// this is solution to https://leetcode.com/problems/robot-return-to-origin/

class Solution {
public:
    bool judgeCircle(string moves) {
        vector<int> dir(2,0);
        for (int i=0; i<moves.length(); i++){
            if(moves[i]=='U'){
                dir[0]++;
            }
            else if (moves[i]=='D'){
                dir[0]--;
            }
            else if (moves[i]=='R'){
                dir[1]++;
            }
            else{
                dir[1]--;
            }
        }
        
        return dir[0]==0 && dir[1]==0;
    }
};