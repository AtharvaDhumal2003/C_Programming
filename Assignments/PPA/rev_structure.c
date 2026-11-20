#include<stdio.h>

struct student
{
    int RID;
    int Age;
    int Marks;
    int Division;
    int Salary;
};

int main()
{
    struct student obj97;
    struct student obj260;
    struct student *ptr = NULL;

    obj97.RID = 97;
    obj97.Age = 25;
    obj97.Marks = 87.99;
    obj97.Division = 'A';
    obj97.Salary = 90000;

    obj260.RID = 260;
    obj260.Age = 26;
    obj260.Marks = 88.990978;
    obj260.Division = 'C';
    obj260.Salary = 98000;

    ptr =&obj97;

    printf("RID of Datta : %d\n",ptr->RID);
    printf("Age of Datta : %d\n",ptr->Age);
    printf("Salary of Datta : %d\n",ptr->Salary);

    ptr = &obj260;

    printf("RID of Omkar : %d\n",ptr->RID);
    printf("Age of Omkar : %d\n",ptr->Age);
    printf("Salary of Omkar : %d\n",ptr->Salary);

    return 0;
}