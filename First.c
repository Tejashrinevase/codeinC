/* Accet Number from User check weather the number is even or odd */

#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkEvenOdd(int iNo)
{
    int iRsult =0;
  
   iResult % 2 ==0        //Mode operator which eturn remainder after division
  
    if(iResult == 1)      // if remainder is one means number is odd
    {
        return FALSE;
    }
    else
    {
       return TRUE;
    }
}
    
int main()
{
    int iValue = 0;       //Local Variable
    BOOL iAns = FALSE;    //Local Variable
  
    printf("Enter the Number\n");     // Display on screen
    scanf("%d",&iValue);              // Accept input from keyboard
  
    iAns = ChkEvenOdd(iValue);
    if(iAns == TRUE)
    {
        printf("The given number is even\n");
    }
    else
    {
        printf("The number is odd\n");
    }
 return 0;
}
    

