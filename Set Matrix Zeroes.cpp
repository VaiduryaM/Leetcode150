//73. Set Matrix Zeroes


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int row = matrix.size();
        int col = matrix[0].size();
        //dont use as vector<vector<int,int>> use as vector<pair<int,int>>
        vector<pair<int,int>> zerosAt;

        for(int i =0; i<row; i++){
            for(int j=0; j<col;j++){
                if(matrix[i][j] == 0){
                    zerosAt.push_back(std::make_pair(i,j));
                }
            }
        }

        for(int i=0; i<zerosAt.size();i++)
        {

            int makeZeroR = zerosAt[i].first;
            int makeZeroC = zerosAt[i].second;
            
            //make them zeros in given matrix
            for(int a=0; a<row; a++){
                for(int b=0; b<col;b++){
                    if(makeZeroR == a) matrix[a][b] =0;

                    if(makeZeroC == b) matrix[a][b] =0;
                }
            }
        }
       
    }
};