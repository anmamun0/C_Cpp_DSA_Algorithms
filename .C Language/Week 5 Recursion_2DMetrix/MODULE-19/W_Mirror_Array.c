#include<stdio.h>
int main(){

    int row, column;
    scanf("%d%d", &row, &column);

    int array[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++){
            scanf("%d", &array[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = column-1; j >=0 ; j--){
            
            if(j!=0){
            printf("%d ", array[i][j]);
            }
            else{
            printf("%d", array[i][j]);

            }
        }
        printf("\n");
    }
    
    return 0;
}