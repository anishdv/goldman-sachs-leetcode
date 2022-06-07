// this is solution to https://leetcode.com/problems/first-unique-character-in-a-string/

class Solution {
public:
    int firstUniqChar(string s) {
        // tc-0(n) sc- o(26)
        unordered_map<char, int> mp;
        for (int i=0; i<s.size(); i++){
            if (mp.find(s[i])!=mp.end()){
                mp[s[i]]++;
            }
            else{
                mp[s[i]]=1;
            }
        }
        
        for (int i=0; i<s.size(); i++){
            if (mp[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};