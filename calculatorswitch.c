#include<stdio.h>
main()
{   int n1,n2;
	char opt;
	float res;
	printf("choose an operator(+,-.*./) operate in calculator");
	scanf("%c",&opt);
	if(opt=='+') 
	{
		printf("selected '+' ");
	 } 
else if (opt=='-')
{
	printf("selected '-' ");
}
else if (opt=='*')
{
	printf("selected '*' ");
}
else if(opt=='/')
{
	printf("selected '/' ");
}
printf("\n enter first number");
scanf("%d",&n1);
printf("\n enter second number");
scanf("%d",&n2);
switch(opt)
{	case '+':
		res=n1+n2;
		printf("addition of %d and %d is  %.2f",n1,n2,res);
		break;
		case '-':
			res=n1-n2;
		printf("substraction of %d and %d is  %.2f",n1,n2,res);
		break;
		case '*':
			res=n1*n2;
		printf("multipication of %d and %d is  %.2f",n1,n2,res);
		break;
		case '/':
		if(n2==0)
		{	printf("\n divisior can notbe zero");
			scanf("%d",&n2);
			}
			res=n1/n2;
				printf("divisior of %d and %d is  %.2f",n1,n2,res);
		break;
		default:
			printf("wrong number");
		
}
}
