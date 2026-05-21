#include <stdio.h>

int main(){
    printf("Viraj Vikram Singh - 25/B08/054\n");
    const char *fruits[] = {"Apple","Mango","Banana","Orange","Grapes"};
    printf("List of fruits: \n");
    for (int i=0;i<5;i++){
        printf("%s\n",fruits[i]);
    }
    printf("\n");

    int a=54,b=23,c=5,d=2,e=24;
    int *values[] = {&a,&b,&c,&d,&e};
    printf("Integer values: \n");
    for (int i=0;i<5;i++){
        printf("%d\n",*values[i]);
    }
}