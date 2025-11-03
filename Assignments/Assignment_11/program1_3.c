/////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//  
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////
//  Function name:  RangeSum
//  Description:    It is used takes two numbers as input and displays
//                  sum of numbers between that numbers.
//  Input:          int int
//  Author:         Atharva Sanjay Dhumal.
//  Date:           28/10/2025
//
/////////////////////////////////////////////////////////////////////////////
void RangeSum(int iStart,int iEnd)
{
    int iCnt=0;
    int iSum=0;

    if(iStart>0 && iEnd>0 && iStart<iEnd)
    {
        for(iCnt=iStart;iCnt<=iEnd;iCnt++)
      {
          iSum=iSum+iCnt;
      }
    }
    else
    {
      printf("Invalid input");
    }
   
   if(iSum>0)
   {
     printf("%d",iSum);
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
    unsigned int iValue1=0,iValue2=0;//bookk
    
    printf("Enter Starting point:");
    scanf("%d",&iValue1);

    
    printf("Enter Ending point:");
    scanf("%d",&iValue2);

    RangeSum(iValue1,iValue2);

    return 0;

}
////////////////////////////////////////////////////////////////////////////
//
// Testcases Succesfully handled by the application
//  Input1:23    Input2:30    output:212
//  Input1:-1    Input2:5     output:Invalid input
//  Input1:90    Input2:18     output:Invalid input
//
/////////////////////////////////////////////////////////////////////////////