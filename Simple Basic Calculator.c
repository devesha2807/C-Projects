#include<stdio.h>
#include<stdlib.h>

int main()

{
int a, b, c, d, e,x;

printf("Hello Sir! What do you want to do?\n1. Addition\n2. Subtract\n3. Multiplication\n4. Division\n\nGive your choice by typing the respective number of the option\n");
scanf(" %d", &x);

//For Addition
//----------------------------------------------------------------------------
if (x ==1){
printf("How many numbers do you want to add(upto 4 numbers) : ");
scanf(" %d", &x);

if (x==2){
printf("Enter the numbers you want to add\n");
scanf(" %d%d", &a, &b);

e = a+b;

printf("The sum is %d\n", e);

}
if (x==3){
printf("Enter the numbers you want to add\n");
scanf(" %d%d%d", &a, &b, &c);

e= a+b+c;

printf("The sum is %d\n", e);

}

if (x==4){
printf("Enter the numbers you want to add\n");
scanf(" %d%d%d%d", &a, &b, &c, &d);

e = a+b +c +d;

printf("The sum is %d\n", e);

}
}

//----------------------------------------------------------------------------

//For subtration
else if(x == 2){

printf("Enter the numbers you want to subtract\n");

scanf(" %d%d", &a, &b);

e = a - b;

printf("The difference is %d\n", e);


}
//---------------------------------------------------------------------------


//For multiply
else if (x == 3){
printf("How many numbers do you want to multiply(upto 4 numbers) : ");
scanf(" %d", &x);

if (x==2){
printf("Enter the numbers you want to multipy\n");
scanf(" %d%d", &a, &b);

e = a*b;

printf("The product is %d\n", e);

}
if (x==3){
printf("Enter the numbers you want to multipy\n");
scanf(" %d%d%d", &a, &b, &c);

e= a*b*c;

printf("The product is %d\n", e);

}

if (x==4){
printf("Enter the numbers you want to multipy\n");
scanf(" %d%d%d%d", &a, &b, &c, &d);

e = a*b*c*d;

printf("The product is %d\n", e);

}
}
//------------------------------------------------------------------------

//For divide

else if(x == 4){

printf("Enter numerator and denomenator respectively\n");

scanf(" %d%d", &a, &b);

c = a/b;
d = a&b;

printf("The quoteint and remainder is %d and %d respectively\n", c, d);


}

return 0;

}