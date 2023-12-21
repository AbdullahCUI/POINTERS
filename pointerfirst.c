#include<stdio.h>

int main(void){

    int num=10;//declaring one variable and asign value

    int *ptr=&num;//declaring pointer and asign the adress of the num variable;

    //try to print the pointer 

    printf("%d", *ptr);

    return 0;

}