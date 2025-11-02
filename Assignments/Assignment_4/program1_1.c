/////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//  
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>


/*First Logic
void PrintEven(int iNo)
{
    int iCnt = 0;
    int i = 0;

    if(iNo < 0)
    {
        return;
    }
    
   while(iCnt<iNo)
   {
     i=i+2;
     printf("%d\t",i);
     iCnt++;
   }
}*/
/////////////////////////////////////////////////////////////////////////////
//  Function name:  PrintEven  
//  Description:    It is used to print even numbers input number of times
//  Input:          int
//  Author:         Atharva Sanjay Dhumal.
//  Date:           27/10/2025
//
/////////////////////////////////////////////////////////////////////////////
void PrintEven(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        return;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        //iCnt=iCnt*2;only three values printed
        printf("%d\t",iCnt*2);
    }
}
/////////////////////////////////////////////////////////////////////////////
//  
//  Entry Point Function for the application
//
/////////////////////////////////////////////////////////////////////////////


int main()
{
    int iValue = 0;

    printf("Enter number\n");

    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}
/////////////////////////////////////////////////////////////////////////////
//
// Testcases Succesfully handled by the application
//  Input: 7    output:2 4 6 8 10 12 14
//
/////////////////////////////////////////////////////////////////////////////
