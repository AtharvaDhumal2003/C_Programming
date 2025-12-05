/////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//  
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////
//  Function name:  Display
//  Description:    It use to display ASCII table.
//  Input:          char
//  Output:         boolean
//  Author:         Atharva Sanjay Dhumal.
//  Date:           28/11/2025
//
/////////////////////////////////////////////////////////////////////////////
void DisplayASCII()
{
    char ch = '\0';
    for(ch = '\0'; ch <' ÿ'; ch++)
    {

        printf("|%c|\n",ch);
        printf("|%d|\n",ch);
        printf("|%#X|\n",ch);
        printf("|%o|\n",ch);
    }
}
/////////////////////////////////////////////////////////////////////////////
//  
//  Entry Point Function for the application
//
/////////////////////////////////////////////////////////////////////////////

int main()
{
    DisplayASCII();
    return 0;
}
////////////////////////////////////////////////////////////////////////////////////
//
//|Symbol:=|      |Decimal:61|    |Hexadecimal:0X3D|      |Octal:75       |
//|Symbol:>|      |Decimal:62|    |Hexadecimal:0X3E|      |Octal:76       |
//|Symbol:?|      |Decimal:63|    |Hexadecimal:0X3F|      |Octal:77       |
//|Symbol:@|      |Decimal:64|    |Hexadecimal:0X40|      |Octal:100      |
//|Symbol:A|      |Decimal:65|    |Hexadecimal:0X41|      |Octal:101      |
//|Symbol:B|      |Decimal:66|    |Hexadecimal:0X42|      |Octal:102      |
//|Symbol:C|      |Decimal:67|    |Hexadecimal:0X43|      |Octal:103      |
//
////////////////////////////////////////////////////////////////////////////////////
