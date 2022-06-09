// this is solution to https://leetcode.com/problems/pairs-of-songs-with-total-durations-divisible-by-60/

class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int n=time.size();
        int temp;
        int pairCount=0;
        unordered_map<int,int> m;
        for(int i=0; i<n ; i++){
            temp=time[i]%60;
            pairCount+=m[(60-temp)%60];
            m[temp]++;
        }
        return pairCount;
    }
};