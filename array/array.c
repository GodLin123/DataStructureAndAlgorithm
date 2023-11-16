#include<stdio.h>
int main(){
    int marks[5]={100,89,77,2,34};

    for(int i=0;i<=4;i++){
        if(marks[i]<=35){
            printf("scored less than 35 whose srn %d \n",i);
        }
    }
}