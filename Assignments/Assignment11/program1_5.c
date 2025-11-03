/////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//  
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////
//  Function name:  RangeDisplayRev
//  Description:    It is used takes two numbers as input and displays
//                   numbers between that numbers in reverse  order. 
//  Input:          int int
//  Author:         Atharva Sanjay Dhumal.
//  Date:           28/10/2025
//
/////////////////////////////////////////////////////////////////////////////
void RangeDisplayRev(int iStart,int iEnd)
{
    int iCnt=0;

   if(iStart>iEnd)
   {
     for(iCnt=iEnd;iCnt>=iStart;iCnt--)
    {
        printf("%d\t",iCnt);
    }
   }
   printf("Invalid input");
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

    RangeDisplayRev(iValue1,iValue2);

    return 0;

}
////////////////////////////////////////////////////////////////////////////
//
// Testcases Succesfully handled by the application
//  Input1:23    Input2:30    output:30 29 28 27 26  25 24 23
//
/////////////////////////////////////////////////////////////////////////////