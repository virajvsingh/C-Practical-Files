#include <stdio.h>
int main() {
    printf("Viraj Vikram Singh - 25/B08/054\n");

    FILE *fp;
    char name[50];
    int age;
    float salary;

    fp = fopen("emp.txt", "w");
    if (fp == NULL) {
        printf("Error opening file"); 
        return 1;
    }

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter age: ");
    if (scanf("%d", &age) != 1) {
        printf("Invalid age input.\n");
        return 1;
    }

    printf("Enter salary: ");
    scanf("%f", &salary);

    fprintf(fp, "--- Employee Record ---\n");
    fprintf(fp, "Name   : %s", name);
    fprintf(fp, "Age    : %d\n", age);
    fprintf(fp, "Salary : $%.2f\n", salary);
    fprintf(fp, "-----------------------\n");

    fclose(fp);

    printf("\nSuccess: Data written to emp.txt\n");

    return 0;
}