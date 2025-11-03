/////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//  
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////
//  Function name:  Display
//  Description:    It is used to take input number and displays its spelling 
//  Input:          int
//  Author:         Atharva Sanjay Dhumal.
//  Date:           27/10/2025
//
/////////////////////////////////////////////////////////////////////////////
void Display(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    
    switch(iNo)
     {
        case 0:
            printf("Zero\n");
            break;

        case 1:
            printf("One\n");
            break;

        case 2:
            printf("Two\n");
            break;

        case 3:
            printf("Three\n");
            break;                        

        
        case 4:
            printf("Four\n");
            break;                        

        
        case 5:
            printf("Five\n");
            break;                        

        
        case 6:
            printf("Six\n");
            break;                        

            
        case 7:
            printf("Seven\n");
            break;                        

        
        case 8:
            printf("Eight\n");
            break;
            
        case 9:
            printf("Nine\n");
            break;
                                                                                
        default:
            printf("Invalid input\n");
    }

}
//Time complexity:O(1)

/////////////////////////////////////////////////////////////////////////////
//  
//  Entry Point Function for the application
//
/////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;
    printf("Enter Number:");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
// Testcases Succesfully handled by the application
//  Input:5         output:Five
//  Input:9         output:Nine
//  Input:0         output:zero
//  Input:10        output:Invalid input
//
/////////////////////////////////////////////////////////////////////////////