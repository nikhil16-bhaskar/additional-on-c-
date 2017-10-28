// simple calculator

#include<stdio.h>
int main()
{
	int num1,num2;
	char ch;
	float ans;
	
	printf("Enter 1st number");
	scanf("%d",&num1);
	
	printf("Enter 2nd number");
	scanf("%d",&num2);
	
	printf("Enter an operator");
	scanf("\n%c",&ch);  //"\n%c"- to clear the memory buffer input-- coz if it is not done, the enter value stores in ch
	
	switch(ch)
	{
		case '+':
			ans=num1+num2;
			printf("%f",ans);
		break;
		case '-':
			ans=num1-num2;
			printf("%f",ans);
		break;
		case '*':
			ans=num1*num2;
			printf("%f",ans);
		break;
		case '/':
			ans=num1/num2;
			printf("%f",ans);
		break;
		case '%':
			ans=num1%num2;
			printf("%f",ans);
		break;
		default:
			printf("Wrong key entered");
	}
}