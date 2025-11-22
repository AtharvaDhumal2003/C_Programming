/////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//  
/////////////////////////////////////////////////////////////////////////////
#include<Stdio.h>
/////////////////////////////////////////////////////////////////////////////
//  Function name:  Pattern
//  Description:    It is used to Display given pattern                 
//  Input:          int,int
//  Author:         Atharva Sanjay Dhumal.
//  Date:           20/11/2025
//
/////////////////////////////////////////////////////////////////////////////
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch ='\0';
    for(i = 1,ch = 'A'; i <= iRow; i++,ch++)
    {
        for(j = 1; j<=iCol;j++)
        {
            printf("%c\t",ch);
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
// Testcases Succesfully handled by the application
//     Enter number of Rows:5
//     Enter number of columns:3
//     A       A       A
//     B       B       B
//     C       C       C
//     D       D       D
//     E       E       E
//
/////////////////////////////////////////////////////////////////////////////////////