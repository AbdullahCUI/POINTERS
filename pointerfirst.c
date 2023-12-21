#include<stdio.h>

int main(void){

    int num=10;//declaring one variable and asign value

    int *ptr=&num;//declaring pointer and asign the adress of the num variable;

    //try to print the pointer 
    printf("Num is= %d\n", num);//check the value of num
    printf("Size of num=%d\n", sizeof(num));//check the size of num
    printf("%d", *ptr);//print pointer value 
    printf("Size of pointer=%d\n", ptr);//check the size of ptr or pointer

    return 0;

}