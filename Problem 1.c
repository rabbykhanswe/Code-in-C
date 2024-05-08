#include<stdio.h>
//declare a structure
struct Employee{

      char name[20];
      int employeeID;
      float salary;

};
//declare an array for get6 5 employee information
int main ()
{
    struct Employee employees[5];

    for(int i=0; i<5;++i){
        printf("Enter your name :");
        scanf("%s",&employees[i].name);

        printf("Enter your employee ID :");
        scanf("%d",&employees[i].employeeID);

        printf("Enter your salary : $");
        scanf("%f",&employees[i].salary);
        printf("\n");
    }
    printf("\n");
    printf("Employee Information Below--\n");

    //printing all the information

    for(int i=0; i<5; ++i){

        printf("Name : %s\n",employees[i].name);
        printf("Employee ID : %d\n",employees[i].employeeID);
        float annual_salary=employees[i].salary*12;
        printf("Annual Salary : $%2f\n",annual_salary);
        printf("\n");

    }




    return 0;
}
