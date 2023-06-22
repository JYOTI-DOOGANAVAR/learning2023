#include<stdio.h>
int bit_operations(int num, int oper_type){
    if(oper_type == 1){
        //Set 1st bit
        num |= (1 << 0);
    }
    else if(oper_type == 2){
        //Clear 31st bit
        num &= ~(1 << 31);
    }
    else if(oper_type == 3){
        //Toggle 16th bit
        num ^= ( 1 << 16);
    }
    else{
        //Invalid operation
        return -1;
    }
    return num;
}

int main(){
    int num, oper_type;
    printf("Enter the number: "); //Get the number
    scanf("%d", &num);

    printf("Enter the operation type: ");
    scanf("%d", &oper_type);

    int result= bit_operations(num, oper_type); //Perform the operation

    if(result != -1){
        printf("The result is %d\n", result);
    }
    else{
        printf("Invalid operation type\n");
    }
    return 0;
}