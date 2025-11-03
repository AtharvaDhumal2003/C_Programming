/////////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//  
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////
//  Function name:  FindLargest  
//  Description:    It is used to give Largest number among of given inputs
//  Input:          int int int
//  Output:         int
//  Author:         Atharva Sanjay Dhumal.
//  Date:           27/10/2025
//
/////////////////////////////////////////////////////////////////////////////
int FindLargest(int x,int y,int z)
{
    if(x>y && y>z)
    {
        return x;
    }
    else if(y>x && x>z)
    {
        return y;
    }
    else if(z>y && z>x)
    {
        return z;
    }
}
/////////////////////////////////////////////////////////////////////////////
//  
//  Entry Point Function for the application
//
/////////////////////////////////////////////////////////////////////////////

int main()
{
    int a,b,c,result;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);

    result=FindLargest(a,b,c);
    printf("Largest number is:%d\n",result);
    return 0;
}
/////////////////////////////////////////////////////////////////////////////
//
// Testcases Succesfully handled by the application
//  Input: 10      Input2 : 3       Input3:1   output:Largest number is:10
//  Input: 12      Input2 : 13      Input3:14  output:Largest number is:14            
//
//
/////////////////////////////////////////////////////////////////////////////