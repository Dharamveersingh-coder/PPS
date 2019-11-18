#include<stdio.h>
int main()
{int a,b,c;
char n;


printf("\nEnter the First number:");
scanf("%f",&a);
printf("\nEnter the second  number:");
scanf("%f",&b);
printf("\nEnter the opreater number:");
scanf("%f",&n);
switch(n)
{
case '+':
c=a+b;
printf("%f",c);
break;

case '-':
c=a-b;
printf("%d",c);
break;

case '/':
c=a/b;
printf("%d",c);
break;

case '*':
c=a*b;
printf("%d",c);
break;

case '%':


c=a%b;

printf("%d",c);
break;

default: printf("Try some another time");
}






}

