/////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//  
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>


/////////////////////////////////////////////////////////////////////////////
//  Function name:  strcpyToggleX
//  Description:    It used to copy string by toggling chraters small to 
//                  capital and capital to small. .
//  Input:          char
//  Author:         Atharva Sanjay Dhumal.
//  Date:           03/12/2025
//
/////////////////////////////////////////////////////////////////////////////

void strcpyToggleX(char *str, char *dest)
{
 
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        else if( *str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        *dest = *str;
        str++;
        dest++;
    }
    dest = '\0';

}
/////////////////////////////////////////////////////////////////////////////
//  
//  Entry Point Function for the application
//
/////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    strcpyToggleX(Arr,Brr);

    printf("%s\n",Brr);

}
////////////////////////////////////////////////////////////////////////////////////
//
//Enter String :
//MarvellouS Python 2
//mARVELLOUs pYTHON 2
////////////////////////////////////////////////////////////////////////////////////