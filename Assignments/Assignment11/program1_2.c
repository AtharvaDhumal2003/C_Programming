/////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//  
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////
//  Function name:  RangeDisplayEven
//  Description:    It is used takes two numbers as input and displays
//                  even numbers between that numbers.
//  Input:          int int
//  Author:         Atharva Sanjay Dhumal.
//  Date:           28/10/2025
//
/////////////////////////////////////////////////////////////////////////////
void RangeDisplayEven(int iStart,int iEnd)
{
    int iCnt=0;

    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
       if((iCnt%2)==0)
       {
         printf("%d\t",iCnt);
       }
    }
}
//Time Complexity:O(N)


/////////////////////////////////////////////////////////////////////////////
//  
//  Entry Point Function for the application
//
/////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1=0,iValue2=0;
    
    printf("Enter Starting point:");
    scanf("%d",&iValue1);

    
    printf("Enter Ending point:");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return 0;

}
////////////////////////////////////////////////////////////////////////////
//
// Testcases Succesfully handled by the application
//  Input1:23    Input2:32    output: 24 26 28 30 32
//  Input1:-1    Input2:5     output:0 2  4 
//
/////////////////////////////////////////////////////////////////////////////