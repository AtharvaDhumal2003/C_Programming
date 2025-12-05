/////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//  
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>


/////////////////////////////////////////////////////////////////////////////
//  Function name:  Display
//  Description:    It use to Display time of exam as per input Division.
//  Input:          char
//  Author:         Atharva Sanjay Dhumal.
//  Date:           28/11/2025
//
/////////////////////////////////////////////////////////////////////////////
void DisplayTime(char ch)
{
    if(ch == 'a' || ch == 'A')
    {
        printf("Exam of Division A is at :7 Am");
    }
    else if(ch == 'b' || ch == 'B')
    {
        printf("Exam of Division B is at :8.30 Am");
    }
    else if(ch == 'c' || ch == 'C')
    {
        printf("Exam of Division C is at :9.20 Am");
    }
    else if(ch == 'd' || ch == 'D')
    {
        printf("Exam of Division D is at :10.30 Am");
    }
    else
    {
        printf("Invalid Division");
    }
 
}
/////////////////////////////////////////////////////////////////////////////
//  
//  Entry Point Function for the application
//
/////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter the character :\n");
    scanf("%c",&cValue);

    DisplayTime(cValue);
}
////////////////////////////////////////////////////////////////////////////////////
//
//Enter the character :
//C
//Exam of Division C is at :9.20 Am
//Enter the character :
//c
//Exam of Division C is at :9.20 Am
//Enter the character :
//A
//Exam of Division A is at :7 Am
//Enter the character :
//E
//Invalid Division
////////////////////////////////////////////////////////////////////////////////////