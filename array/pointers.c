#include<stdio.h>
int main(){
    int a=10;
    int *ptr=&a;
    int *p=&ptr;
    printf("address= %d\n",*ptr);
    
    printf("address of pointer = %p",p);
    return 0;
}
//pointers are the datatype which stores the address of a variable .
//size of the pointer datatype depends on the computer artitecture ex: 2bytes for 32bit comp
//* is used to denote the pointer