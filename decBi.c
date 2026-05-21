#include <stdio.h>
#include <math.h>

long decimalToBinary(long decNum);
long binaryToDecimal(long biNum);

int main(){
    printf("Viraj Vikram Singh - 25/B08/054\n");
    long num;
    int option;
    while(1){

        printf("Choose Option\n1.Convert to Decimal(Press 1)\n2.Convert to Binary(Press 2)\n3.Exit(Press -1)\n");
        scanf("%d",&option);
    
        
        if (option== -1){
            break;
        }

        printf("Enter number to be converted: ");
        scanf("%li",&num);

        if(option==1){
            num = binaryToDecimal(num);
            printf("Decimal: %li\n",num);
        }
        else if (option==2){
            num = decimalToBinary(num);
            printf("Binary: %li\n",num);
        }
        else{
            printf("Incorrect option selected!\n");
        }
    }
}

long decimalToBinary(long decNum){
    long binary=0,counter=1;
    while (decNum!=0){
        binary += (decNum%2)*(counter);
        decNum = decNum/2;
        counter *= 10;
    }
    return binary;
}

long binaryToDecimal(long biNum){
    long decimal=0,counter=0;
    while (biNum!=0){
        decimal += (biNum%10)*round(pow(2,counter));
        counter++;
        biNum = biNum/10;
    }
    return decimal;
}

    
