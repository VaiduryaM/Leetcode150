//48. Rotate Image

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
   
    int N = matrix.size();
    //step 1: transposing the matrix
    for (int i = 0; i < N; i++) 
        for (int j = i + 1; j < N; j++) 
            swap(matrix[i][j], matrix[j][i]); 


    int i = 0;
    int j = N - 1;
    int k = 0;
    //step 2: swapping columns
    while (i < j) {
        swap(matrix[k][i], matrix[k][j]);
        k++;

        if (k == N) {
            k = 0;
            i++;
            j--;
        }
    }
    }
};