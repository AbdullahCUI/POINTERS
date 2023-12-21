#include<stdio.h>

int main(){
   
    int array[10]= {1,2,3,4,5,6,7,8,9,10};
 
   //created pointer that point one array
    int *ptr=&array;

    for(int i=0; i<10; i++){
        printf("%d", *(ptr +i));
    }
}