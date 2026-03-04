int numSpecial(int** mat, int matsize, int* matcolsize) {
    int rows = matsize;
    int cols = matcolsize[0];
    int row[rows];
    int col[cols];
    for(int i = 0; i < rows; i++) {
        row[i] = 0;
    }
    for(int j = 0; j < cols; j++) {
        col[j] = 0;
    }
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(mat[i][j] == 1) {
                row[i]++;
                col[j]++;
            }
        }
    }
    int count = 0;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(mat[i][j] == 1 && row[i] == 1 && col[j] == 1) {
                count++;
            }
        }
    }

    return count;
}