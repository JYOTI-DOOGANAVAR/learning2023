#include<stdio.h>
int main(){
    int num1, num2, big;
    printf("Enter two numbers to check biggest of it\n");
    scanf("%d %d", &num1, &num2);
    (num1>num2)? (big=num1) : (big=num2);
    printf("Biggest of %d and %d is %d", num1, num2, big);
}