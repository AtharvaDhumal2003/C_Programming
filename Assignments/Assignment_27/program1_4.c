/////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//  
/////////////////////////////////////////////////////////////////////////////
#include<Stdio.h>
/////////////////////////////////////////////////////////////////////////////
//  Function name:  Pattern
//  Description:    It is used to Display * and # matrix of given row 
//                  and columns.                 
//  Input:          int,int
//  Author:         Atharva Sanjay Dhumal.
//  Date:           20/11/2025
//
/////////////////////////////////////////////////////////////////////////////
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j<= iCol;j++)
        {
            if((j % 2) == 0)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
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
    int iValue1 = 0,iValue2 = 0;

    printf("Enter number of Rows:");
    scanf("%d",&iValue1);

    
    printf("Enter number of columns:");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////
//
//Enter number of Rows:6
//Enter number of columns:5
//      *       #       *       #        *   
//      *       #       *       #        *   
//      *       #       *       #        *
//      *       #       *       #        *
//      *       #       *       #        *
//      *       #       *       #        *
//
/////////////////////////////////////////////////////////////////////////////////////