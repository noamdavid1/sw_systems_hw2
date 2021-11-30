#include <stdio.h>
#include <math.h>

#define MAX 200000000

void make_mat(int mat[10][10]){
    for (int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            int x=0;
            scanf("%d", &x);
            mat[i][j]=x;   
        }
    }
}

int Route(int x, int y,int mat[10][10]){    
    if(short_Route(x,y,mat)>0){
        printf("True\n");
        return 1;
    }
    printf("False\n");
    return 0;
}

int short_Route(int x, int y,int mat[10][10]){
    int mat_temp[10][10]={{0}};

    for (int i = 0; i < 10; i++){
        for ( int j = 0; j < 10; j++){
            mat_temp[i][j] = mat[i][j];
        }
    }
    for (int i = 0; i < 10; i++){
        for ( int j = 0; j < 10; j++){
            if(mat_temp[i][j]==0 && i!=j){
                mat_temp[i][j]=MAX;
            }
        }
    }
    for (int k = 0; k < 10; k++){
        for (int i = 0; i < 10; i++){
            for (int j = 0; j < 10; j++){
                if(mat_temp[i][j] > mat_temp[i][k]+mat_temp[k][j]){
                    mat_temp[i][j]= mat_temp[i][k]+mat_temp[k][j];
                }
            }  
        } 
    }
    if(mat_temp[x][y]==0 ||mat_temp[x][y]>=MAX){
        mat_temp[x][y]= -1;
    }
    return mat_temp[x][y];
}



// int main(){
//     int matrix[10][10]={{0 3 1 0 0 2 0 0 0 0},{3 0 1 0 0 0 0 0 0 0},{1 1 0 0 0 0 0 0 0 0},{0 0 0 0 0 0 0 5 0 0},{0 0 0 0 0 0 0 4 1 1},{2 0 0 0 0 0 2 0 0 0},{0 0 0 0 0 2 0 0 0 0},{0 0 0 5 4 0 0 0 0 2},{0 0 0 0 1 0 0 0 0 0},{0 0 0 0 1 0 0 2 0 0}};
//     make_mat(matrix);
// }