#include <stdio.h>
#include <stdlib.h>
#define  INT_SIZE  (sizeof(int)*8)
/*int main()
{
    int num,zeroes=0,ones=0,i ;
printf ("enter your number");
scanf ("%d",&num);
for (i=0;i<INT_SIZE;i++)
{
    if (num&1)
    {
   ones++;
    }
    else
        zeroes++;
    num>>=1;
}
printf ("number of zeroes is %d\n",zeroes);
printf ("number of oneses is %d\n",ones);
    return 0;
}*/
/*int main ()
{
    int year ;
    printf ("pls enter year");
    scanf("%d",&year);
    if (year%100!=0&&year%4==0)
        printf("leap year");
    else
           printf(" not aleap year");


    return 0;
}*/
/*int main ()
{
char Opertor;
 int num1,num2,result;
printf ("please enter an Opertor(+,-,*,/)");
scanf("%c",&Opertor);
printf (" enter two operands");
scanf ("%d%d",&num1,&num2);
switch (Opertor)
{
case '+' :result=num1+num2;
break;
case '-' :result=num1-num2;
break;
case '*' :result=num1*num2;
break;
case '/' :result=num1/num2;
break;
}

printf ("result%d",result );

return 0;
}*/


/*int main ()
{
    int sum=0,a,reminder;
    printf ("enter number of digits\n");
    scanf("%d",&a);
  while (a!=0)
    {   reminder=a%10;
         sum= sum+reminder;
         a=a/10;

    }

    printf ("sum=%d",sum);


    return 0;
}
*/
/*int main ()
{
    int n,p,result;
    printf ("enter the number");
    scanf ("%d",&n);
    printf ("enter the power");
     scanf ("%d",&p);
     result=  pow(n,p);
     printf ("result=%d",result);

}*/
/*void max (int a,int b,int c,int d)
{
int max;
    if (a>b&&a>c&&a>d)
    max=a;
      else if (b>a&&b>c&&b>d)
    max=b;
      else if (c>b&&c>a&&c>d)
    max=c;
    else
        max=d;
   printf ("max is%d",max);

}
int main ()
{

        int a,b,c,d;
    printf ("please rnter 4 numbers");
    scanf ("%d%d%d%d",&a,&b,&c,&d);
    max (a,b,c,d);

    return 0;
}*/
/*int main ()
{ int size,even=0,odd=0,i;
printf ("enter size of array");
scanf ("%d",&size);
int arr[size];
printf ("rnter elements of array");
for (i=0;i<size;i++)
{
    scanf ("%d",&arr[i]);
    if (arr[i]%2==0)
        even++;
        else
        odd++;
}
printf ("total even elements %d\n",even);
printf ("total odd elements %d\n",odd);



    return 0;
}*/
/*int main ()
{
    char s1[100],s2[100],i;
    printf ("enter string\n");
    fgets (s1,sizeof(s1),stdin);
    for(i=0;s1[i]!='\0';++i)
    {
     s2[i]=s1[i];

    }
 s2[i]='\0';
    printf (" copied string %s\n",s2);

    return 0;
}
*/


/*
void findGreaterSmaller(int a, int b, int arr[])
{
    if (a > b)
         {
        arr[0] = a;
        arr[1] = b;
          }
    else {
        arr[0] = b;
        arr[1] = a;
    }
}
int main()
{
    int x, y;
    int arr[2];

    printf("Enter two numbers: \n");
    scanf("%d%d", &x, &y);

    findGreaterSmaller(x, y, arr);

    printf("\nThe greater number is %d and the "
           "smaller number is %d",
           arr[0], arr[1]);

    return 0;
}
*/
/*int main ()
{ int n ,decimal=0,base=1,rem;
printf ("enter the  binary number");
scanf ("%d",&n);
while (n>0)
{
    rem=n%10;
    decimal=decimal+rem*base;
    base=base*2;
    n=n/10;
}
    printf ("%d",decimal);

    return 0;
}*/


