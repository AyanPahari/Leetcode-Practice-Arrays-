class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>res={{1}};
        for(int n=1;n<numRows;n++){
            int ans=1;
            vector<int>output={1};
            for(int r=1;r<=n;r++){
                ans=ans*(n-r+1)/r;
                output.push_back(ans);
            }
            res.push_back(output);
        }
        return res;
    }
};