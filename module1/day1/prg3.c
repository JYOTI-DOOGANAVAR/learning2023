#include<stdio.h>
float calculate(float operand1, char operator, float operand2){
    float result;
    if(operator=='+')
    result=operand1+operand2;
    else if(operator=='-')
    result=operand1+operand2;
    else if(operator=='*')
    result=operand1*operand2;
    else if(operator=='/')
    result=operand1/operand2;
    else{
        printf("Invalid Operator\n");
    }
    return result;
    
}
int main(){
    float operand1, operand2;
    char operator;
    printf("Enter the 1st number: ");
    scanf("%f",&operand1);
    printf("Enter the operator: ");
    scanf(" %c",&operator);
    printf("Enter the 2nd number: ");
    scanf("%f",&operand2);
    float result=calculate(operand1, operator, operand2);  //Calculate the result
    printf("%.2f %c %.2f=%.2f\n", operand1, operator, operand2, result);
    
    return 0;
}