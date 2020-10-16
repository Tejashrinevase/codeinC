/*problem statement:
                    Accept one number from user and display the multiplication of factor of given number.
*/
/*
Algorith:
		START:
			Acccept one number from user as iValue;
			create one couunter as iCnt and initiallise it at 1;
			iterate the counter less than that number which is given by user;
		
		     then
			create one varaible as iRet to stored the multiplication of that factor
			put condition for multiplication
			and return that multiplication of tht factor
			display the multiplication of that factors
	END
			
		END

*/
#include <stdio.h>

int MultFact(int iNo)
{
	int iCnt=0;
	int iMult=1;
	
	for(iCnt=2;iCnt<=iNo/2;iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			iMult=  iMult * iCnt;
		}
	}
		
		return iMult;
	
}
int main()
{
	int iValue=0;
	int iRet=0; 
	
	printf("Enter the number :");
	scanf("%d",&iValue);
	
	iRet= MultFact(iValue);
	printf("the multiplication of factor is : %d",iRet);
	
	return 0;
	
}
	
