#include <stdio.h>
int main()
{
int a,b,x;
char op;
printf ("enter a no\n");
scanf ("%d %d", &a,&b);
printf("\nenter a operator");
scanf(" %c",&op);
if (op == '+') 
{
x=a+b;
}
else if (op == '-') 
{
x=a-b;
}
else if (op == '/') 
{
x=a/b;
}
else if (op == '%') 
{
x=a%b;
}
else
{
x=a*b;
}
printf("the ans is %d ", x);
return 0;
}
