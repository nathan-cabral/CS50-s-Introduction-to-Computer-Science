#include<stdio.h>

int main(void){

    char name[50];
    printf("whats is your name: ");
    scanf("%49s",name);
    printf("Hello, %s",name);

    return 0;
}