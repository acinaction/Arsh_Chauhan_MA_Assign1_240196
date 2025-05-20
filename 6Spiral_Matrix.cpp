class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> v;
        int rows = matrix.size();
        int columns = (rows > 0) ? matrix[0].size() : 0;
        int leftl=0,rightl=columns-1,upl=0,downl=rows-1;
        int i=upl,j=leftl;
        while(leftl<=rightl && upl<=downl){
            for(;j<=rightl;j++){
                v.push_back(matrix[upl][j]);
            }
            j=rightl;
            upl++;
            i=upl;
            for(;i<=downl;i++){
                v.push_back(matrix[i][rightl]);
            }
            i=downl;
            rightl--;
            j=rightl;
            if(downl>=upl){
                for(;j>=leftl;j--){
                    v.push_back(matrix[downl][j]);
                }
                j=leftl;
                downl--;
                i=downl;
            }
            if(leftl<=rightl){
                for(;i>=upl;i--){
                    v.push_back(matrix[i][leftl]);
                }
                i=upl;
                leftl++;
                j=leftl;
            }
        }
        return v;
    }
};