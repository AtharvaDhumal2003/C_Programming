/////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//  
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>


/////////////////////////////////////////////////////////////////////////////
//  Function name:  Display
//  Description:    It use to count diffrence between count of small letters
//                  and capital in a givenstring.
//  Input:          char
//  Output:         int
//  Author:         Atharva Sanjay Dhumal.
//  Date:           28/11/2025
//
/////////////////////////////////////////////////////////////////////////////
int Difference(char str[])
{
    int iCountS = 0, iCountC = 0;
    
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCountS++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCountC++;
        }

        str++;
    }

    return (iCountS - iCountC);
}
/////////////////////////////////////////////////////////////////////////////
//  
//  Entry Point Function for the application
//
/////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);

    printf("Difference is:%d",iRet);
}
////////////////////////////////////////////////////////////////////////////////////
//
//Enter String :
//India Is My Country
//Difference is:8
//Enter String :
//hello Don
//Difference is:6
////////////////////////////////////////////////////////////////////////////////////