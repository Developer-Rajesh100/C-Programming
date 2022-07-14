#include<stdio.h>

//Maximum Number Betwen Two Numbers
int main(){

    int first_number, second_number;

    printf("Enter The First Number: ");
    scanf("%d", &first_number);

    printf("Enter The Second Number: ");
    scanf("%d", &second_number);

    if(first_number > second_number){
        printf("First Number is Big");
    }
    else
    printf("Second Number is Bid");
    return 0;
}