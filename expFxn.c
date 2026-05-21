#include <stdio.h>

int main(){
    printf("Viraj Vikram Singh - 25/B08/054\n");
    int x,n;
    double sum = 1.0, term = 1.0;
    printf("e^x is calculated using it's Taylor Series!\n");
    printf("Enter x for e^x: ");
    scanf("%d",&x);

    printf("Enter number of terms: ");
    scanf("%d",&n);

    for (int i=1;i<n+1;i++){
        term *= ((double)x/(double)i);
        sum += term;

    }

    printf("Value of e^%d: %.4f",x,sum);
}