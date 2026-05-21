#include <stdio.h>
#include <string.h>

struct employee
{
    char name[50];
    int age;
    double salary;
};

int main(){
    printf("Viraj Vikram Singh - 25/B08/054\n");
    int count;
    printf("Enter number of employees: ");
    scanf("%d",&count);
    struct employee emp[count];
    

    char name[50];
    int age;
    float salary;

    for (int i=0;i<count;i++){
        printf("Enter details for empyloee %d: \n",i+1);
        printf("Name: ");
        getchar();
        fgets(emp[i].name,50,stdin);
        printf("Age: ");
        scanf("%d",&emp[i].age);
        printf("Name: ");
        scanf("%lf",&emp[i].salary);

    }
    printf("X------Details of Employees------X");
    for (int i=0;i<count;i++){
        printf("\nEmployee %d\n",i+1);
        printf("Name: %s ",emp[i].name);
        printf("Age: %d ",emp[i].age);
        printf("\nSalary: %lf ",emp[i].salary);
    }
}
