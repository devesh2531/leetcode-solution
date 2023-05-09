class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size(),top=0,left=0,right=m-1,
        bottom=n-1;
        vector<int> v;
        while(v.size()!=m*n){
            for(int i=left;v.size()!=m*n and i<=right;i++){
                v.push_back(matrix[top][i]);
            }
            top++;
            for(int i=top;v.size()!=m*n and i<=bottom;i++){
                v.push_back(matrix[i][right]);
            }
            right--;
            for(int i=right;v.size()!=m*n and i>=left;i--){
                v.push_back(matrix[bottom][i]);
            }
            bottom--;
            for(int i=bottom;v.size()!=m*n and i>=top;i--){
                v.push_back(matrix[i][left]);
            }
            left++;
        }
        return v;
    }
};
