#include<stdio.h>
int main(){
    int a = 5;
    printf("Value of a is: %d\n", a);
    printf("Value of a after pre-increment is: %d\n", ++a);
    printf("Value of a after post-increment is: %d\n", a++);
    printf("Value of a after pre-decrement is: %d\n", --a);
    printf("Value of a after post-decrement is: %d\n", a--);
    return 0;
}