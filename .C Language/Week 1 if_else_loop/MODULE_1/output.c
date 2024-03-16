#include<stdio.h>
int main(){

    int jak_int;
    float float_var;
    char char_var;

    scanf("%d %f %c", &jak_int,  &float_var, &char_var);
    printf("Your OutPut: %d  %0.2f   %c", jak_int, float_var, char_var);

    return 0;
}