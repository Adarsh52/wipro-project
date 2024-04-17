/* print and scan employee detail
slno name gender salary phon address
*/
#include<stdio.h>
#define Employees
struct Employee{
    int slno;
    int id;
    char name[10];
    char gender;
    float salary;
    long int phone_number;
    char address[50];
}
    int main(){
    struct Employees
    employees[Employees];
    int num_employees;
    

    printf("Enter the number of employees:");
    scanf("%d", &num_employees);
    for(int i= 0;i < num_employees; i++){
        printf("\nEnter details for Employee %d:\n",i + i);
        printf("slno:");
        scanf("%d",&employees[i].slno);
        printf("id:");
        scanf("%d",&employees[i].id);
        print("name:");
        scanf("%s",employees[i].name);
        printf("gender (M/F):");
        scanf("%g",employees[i].gender);
        printf("salary:");
        scanf("%f":,employees[i].salary);
        print("phone_numder:");
        scanf("%p:",employees[i].phone_number);
        printf("address:");
        scanf("%s:",employees[i].address);

    }
        printf("\n====================\n");
        printf("  Employee Details   \n");
        printf("====================\n");
        printf("slno id name gender salary phone__number address\n");
        for(int i = 0; i < num_employees; i++){
            printf("%d %d %s %g %f %p %s\n", i + 1, employees[i].slno,employees[i].id,employees[i].name,employees[i].gender,employees[i].salary,employees[i].phone_number,employees[i].address)
        }
        return 0;
    }


