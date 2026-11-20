#include<stdio.h>

int main()
{
    int No1 = 10;
    int *ptr = &No1;

    float data = 90.9;
    float *fptr = &data;

    char ch = 'A';
    char *cptr = &ch;

    printf("No1 : %d\n",No1);
    printf("&No1 : %d\n",&No1);
    printf("ptr : %d\n",ptr);
    printf("&ptr : %d\n",&ptr);
    printf("*ptr : %d\n",*ptr);
    printf("sizeof(No1) : %d\n",sizeof(No1));
    printf("sizeof(ptr) : %d\n",sizeof(ptr));
    
    return 0;
}