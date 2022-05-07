int** transformMatrix(int *array, int size){
    int m = array[0];
    int n = array[1];
    int** mtx;
    mtx = new int *[m];
    for(int i = 0; i < m; i++){
        mtx[i] = new int[n];
    }
    int e = 2;
    for(int i = 0; i < m; i++){
        if(e==size) break;
        for(int j = 0; j <n;j++){
            if(e==size) break;
            mtx[i][j]=array[e];
            e++;
        }
    }
    return mtx;
}
