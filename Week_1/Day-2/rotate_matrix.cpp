#include <bits/stdc++.h> 

void rotateMatrix(vector<vector<int>> &mat, int n, int m){
    
    int row,col,prev,curr,i,rows,cols;
    row = col = 0;
    rows = n;
    cols = m;
    
    
    while(row < rows && col< cols){
        
        if(row + 1 == rows || col + 1 == cols) break;
        prev = mat[row+1][col];
        
        for(i=col;i<cols;i++){
            curr = mat[row][i];
            mat[row][i] = prev;
            prev = curr;
        }
        row++;
        
        for(i=row;i<rows;i++){
            curr = mat[i][cols-1];
            mat[i][cols-1] = prev;
            prev = curr;
        }
        cols--;
        
        if(row < rows){
            for(i=cols-1;i>=col;i--){
                curr = mat[rows-1][i];
                mat[rows-1][i] = prev;
                prev = curr;
            }
        }
        rows--;
        if(col < cols){
            for(i=rows-1;i>=row;i--){
                curr = mat[i][col];
                mat[i][col] = prev;
                prev = curr;
            }
        }
        col++;
    }
}