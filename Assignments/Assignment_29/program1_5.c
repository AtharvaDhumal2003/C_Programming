/////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//  
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////
//  Function name:  Pattern
//  Description:    It is used to Display number matrix of given row 
//                  and columns.                 
//  Input:          int,int
//  Author:         Atharva Sanjay Dhumal.
//  Date:           20/11/2025
//
/////////////////////////////////////////////////////////////////////////////
void Pattern(int iRow,int iCol)
{
   int i=0,j= 0,iCount = 0;
    for(i =1; i<=iRow;i++)
    {
        for(j=1,iCount = i;j<=iCol;j++,iCount++)
        {
            printf("%d\t",iCount);
        }
        printf("\n");
    }
}
/////////////////////////////////////////////////////////////////////////////
//  
//  Entry Point Function for the application
//
/////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Rows:\n");
    scanf("%d",&iValue1);

    
    printf("Enter number of Columns:\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
    return 0;
}
////////////////////////////////////////////////////////////////////////////////////
//
// Enter number of Rows:
// 6
// Enter number of Columns:
// 6
// 1       2       3       4       5       6
// 2       3       4       5       6       7
// 3       4       5       6       7       8
// 4       5       6       7       8       9
// 5       6       7       8       9       10
// 6       7       8       9       10      11
/////////////////////////////////////////////////////////////////////////////////////

