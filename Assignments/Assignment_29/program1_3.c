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
    int i = 0,j = 0;
    char ch = 'a';
    
    for(i =1;i<=iRow;i++)
    {
        for(j =1,ch='a';j<=iCol;j++,ch++)
        {
            if((i%2)==0)
            {
                printf("%d\t",j);
            }
            else
            {
                printf("%c\t",ch);
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
//Enter number of Rows:
// 3
//Enter number of Columns:
// 4
//  a       b       c       d
//  1       2       3       4
//  a       b       c       d
/////////////////////////////////////////////////////////////////////////////////////