
#include<stdio.h>

void Display(int iRow,int iCol)
{

	int iCnt=0,iCnt2=0;
	if(iRow!=iCol)
	{
		return;
	}

	for(iCnt=1;iCnt<=iRow;iCnt++)
	{
		for(iCnt2=1;iCnt2<=iCol;iCnt2++)
		{
			if(iCnt==iCnt2)
			{
				printf("$\t");
			}
			else
			{
				printf("%d\t",iCnt2);
			}
		}
		printf("\n");
	}
}

int main()
{
	int iValue1=0,iValue2=0;

	printf("Enter Rows:\n");
	scanf("%d",&iValue1);

	printf("Enter Columns:\n");
	scanf("%d",&iValue2);

	
	Display(iValue1,iValue2);
	return 0;
}
