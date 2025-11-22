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
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0,iCount = 0;
    

    for(i = 1; i<= iRow;i++)
    {
        for(j =1,iCount =1; j<= iCol;j++,iCount++)
        {
            if((i%2) == 0)
            {
              printf("%d\t",((iCount*2)-1));
            }
            else
            {
                printf("%d\t",iCount*2);
            }
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
// 5
// Enter number of Columns:
// 5
//  2       4       6       8       10
//  1       3       5       7       9
//  2       4       6       8       10
//  1       3       5       7       9
//  2       4       6       8       10
/////////////////////////////////////////////////////////////////////////////////////