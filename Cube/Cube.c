#include<stdio.h>

int main(){
    int number, cube;
    printf("Enter The Number: ");
    scanf("%d", &number);
    cube = number * number * number;
    printf("The Cube is: %d", cube);
    return 0;
}