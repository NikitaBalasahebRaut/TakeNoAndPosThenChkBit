/*
    Problem statement :
 Accept number and poition from user and check whether that bit is on or off.
 
 Input :
 No: 2400
 Poition : 6
 
 Binary :    0000   0000    0000    0000    0000    1001    0110    0000
 Output : TRUE
 
 Input :
 No : 35
 Position : 4
 
 Binary :   0000    0000    0000    0000    0000    0000    0010    0011
 Output : FALSE
 
 */
 
 #include<stdio.h>
 #define TRUE 1
 #define FALSE 0
 typedef int BOOL;
 
 BOOL ChkBit(int iValue,int iPos)
 {
    int iMask = 0x00000001;           //temp mask desing
	int iResult = 0;
	
	if(iValue < 0)
	{
	   iValue = -iValue;
	}
	
	if((iPos < 0)|| (iPos > 32))
	{
	   return FALSE;
	}
	
	iMask = iMask << (iPos-1);     //when we know the possition then redesing the mask
	
	iResult = iValue & iMask;
	
	if(iResult == iMask)
	{
	    return TRUE;
    }
	else
	{
	   return FALSE;
	}
 }
 
  int main()
 {
  int iNo = 0;
  int iPos = 0;
  BOOL bRet = FALSE;
  
  printf("enter the number \n");
  scanf("%d",&iNo);
  
  printf("Enter the possition \n");
  scanf("%d",&iPos);
  
  bRet = ChkBit(iNo,iPos);
  
  if(bRet == TRUE)
  {
     printf(" Bit is on \n");
  }
  else
  {
     printf(" Bit is off \n");
  }
 
 return 0;
 }
 
 /*
 
 output
 
 enter the number
2400
Enter the possition
6
 Bit is on

D:\ProgramTopicWise\LB\6ProblemsOnBitWiseOperator\TakeNoPosChkBit>myexe
enter the number
35
Enter the possition
4
 Bit is off

D:\ProgramTopicWise\LB\6ProblemsOnBitWiseOperator\TakeNoPosChkBit>myexe
enter the number
45
Enter the possition
2
 Bit is off
 
 */