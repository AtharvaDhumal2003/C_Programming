/////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//  
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////
//  Function name:  Display
//  Description:    It use to Display upper case letters untill Z and lower
//                  case letters in revrse order untill a and non alphabet 
//                  displays as it is.
//  Input:          char
//  Author:         Atharva Sanjay Dhumal.
//  Date:           28/11/2025
//
/////////////////////////////////////////////////////////////////////////////
void Display(char ch)
{
    char ch1 = '\0';

    if(ch >= 'A' && ch <= 'Z')
    {
        for(ch1 = ch; ch1 <= 'Z';++ch1)
        {
            printf("%c",ch1);
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(ch1 = ch; ch1 >= 'a';--ch1)
        {
            printf("%c",ch1);
        }
    }
    else
    {
        printf(" ");
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

    Display(cValue);
    return 0;
}
////////////////////////////////////////////////////////////////////////////////////
//
//Enter the character :
//x
//xyz
//
//Enter the character :
//d
//dcba
//
//Enter the character :
//8
//

////////////////////////////////////////////////////////////////////////////////////
