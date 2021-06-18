// #include<stdio.h> 

// int main()

// {
//     printf("i am mahmud");
//     return 0;
// }


// // show inter value
// #include <stdio.h>
// int main()
// {
//     int roll=12345;
//     printf("my roll is : %d ", roll);
//     return 0;
// }

// // show character value
// #include<stdio.h>
// int main()
// {
//     char name='b';
//     printf("my name is : %c", name);
//     return 0;

// }

// //show flot value 
// #include<stdio.h>
// int main()
// {
// float values=11.1555555;
//  printf("sentence is : %f", values);
//  return 0;
// }


// // add new line 
// #include<stdio.h>
// int main()
// {
//     int roll=12345;
//     char first_latter='A';
//     float percentace=11.55;
//     double big_percent=11.1111111111;
//     printf("my roll is : %d \n",roll);
//     printf("my latter is : %c \n",first_latter);
//     printf("my profit is : %f \n",percentace);
//     printf("my klove is : %lf",big_percent);

//     return 0;
// }



// // two output value in a single line 
// #include<stdio.h>
// int main()
// {
//     int first=1111, second =222;
//     printf("number is : %d, %d \n",first, second);
//     return 0;
// }



// // different types of  value in a single line 
// #include<stdio.h>
// int main()
// {
//     int first=1111, second =222;
//     char one='a';
//     float profit=1.10;
//     printf("number is : %d, %d ,%c ,%f \n",first, second, one, profit);
//     return 0;
// }

// // user input 
// #include<stdio.h>
// int main()
// {
//     int roll;
//     printf("type your roll number:");
//     scanf("%d",&roll);
//     printf("your given roll is : %d",roll);
//     return 0;
// }


// // take multiple user input by a single scanf
// #include<stdio.h>
// int main()
// {
//     int x,y,z;
//     printf("enter three int value:");
//     scanf("%d %d %d", &x,&y,&z);
//     printf("entered number are :%d,%d,%d\n",x,y,z);
//     return 0;

// }


// // take different type of user input and show ouput by a single line 
// #include<stdio.h>
// int main()
// {
//     int x,y;
//     char first;
//     float second;
//     printf("enter two int type ,one char and a float type values:");
//     scanf("%d %d %c %f",&x,&y,&first,&second);
//     printf("entered values are: %d, %d, %c, %f, \n",x,y,first,second);
//     return 0;
// }


// // take a user input interger value and convert to ascii value 
// #include<stdio.h>
// int main()
// {
//     int x;
//     printf("enter a intiger number:");
//     scanf("%d", &x);
//     printf("output convert to ascii number: %c", x);
//     return 0;
// }


// // take a user ascii value and convert to decimal value 
// #include<stdio.h>>
// int main()
// {
//     char x;
//     printf("enter a ascii char value:");
//     scanf("%c",&x);
//     printf("converted ascii to decimal is : %d",x);
//     return 0;
// }


// // convert lower case latter to upper case latter
// #include<stdio.h>
// int main()
// {
//     char x;
//     printf("enter any lawer case latter:");
//     scanf("%c",&x);
//     printf("ouput of user inputed lower case value is : %c",x-32);
//     return 0;
// }

// // if convert upper to lower just use x+32
// #include<stdio.h>
// int main()
// {
//     char x;
//     printf("enter any upper case latter:");
//     scanf("%c",&x);
//     printf("ouput of user inputed upper case value is : %c",x+32);
//     return 0;
// }



// // Using toupper function convert lower to upper
// #include<stdio.h>
// int main()
// {
//     int x,y;
//     printf("enter a lower value:");
//     scanf("%c",&x);
//     y=toupper(x);
//     printf("conveter value is: %c",y);
//     return 0;
// }



// // convert decimal to hexadecimal number 
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("enter a decimal number: ");
//     scanf("%d",&num);
//     printf("converted hexadecimal number is = %x",num);
//     return 0;
// }

// // take user input in hexadecimal and convert to decimal 
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("enter a hexadecimal number:");
//     scanf("%x",&num);
//     printf("converted ouput is %d", num);
//     return 0;
// }




// // take user input and sum then 
// #include<stdio.h>
// int main(){
//     int num1,num2,summ;
//     printf("enter first number:");
//     scanf("%d",&num1);
//     printf("enter second number:");
//     scanf("%d",&num2);
//     printf("giver numbers are : %d ,%d \n",num1,num2);
//     summ= num1+num2;
//     printf("sum of two number is :%d",summ);

//     return 0;

// }


// // calculate are of rectangle 
// #include<stdio.h>
// int main()
// {
//     float length, width, area;
//     printf("enter length and width of rectangel:");
//     scanf("%f %f",&length, &width);
//     area=length * width;
//     printf("area of reactangle is: %f",area);
//     return 0;

// }



// // swipe program example 
// #include<stdio.h>
// int main()
// {
//     int num1,num2,num3;
//     num1=10;
//     num2=20;
//     num3=num1;
//     num1=num2;
//     num2=num3;
//     printf(" number one is: %d \n",num1);
//     printf(" number two is: %d",num2);
//     return 0;
// }


// // temparature calculator 
// #include<stdio.h>
// int main()
// {
//     float c,F;
//     printf("enter temparature in farenhite:");
//     scanf("%f",&F);
//     c=(F-32)/1.8;
//     printf("temparature in celcias: %f",c);
//     return 0;

// }


// // absulate value determine 
// #include<stdio.h>
// int main()
// {
//     int x,y;
//     printf(" enter a negative value:");
//     scanf("%d",&x);
//     y=abs(x);
//     printf("ouput value is : %d",y);
//     return 0;

// }



// // using squreroot function to find a squre value
// #include<stdio.h>
// int main()
// {
//     float x,y;
//     printf("enter a value:");
//     scanf("%f",&x);
//     y=sqrt(x);
//     printf("output squre value is: %f",y);
//     return 0;
// }



// // use power function 
// #include<stdio.h>
// int main()
// {
//     int x, z, p;

//     printf("enter two number :");
//     scanf("%d %d", &x,&z);
//     p=pow(x,z);
//     printf("output value is : %d",p);
//     return 0;
// }




// // find log output
// #include<stdio.h>
// int main()
// {
//     float x,y;
// printf("enter a number: ");
// scanf("%f",&x);
// y=log(x);
// printf("OUTPUT IS :%f",y);
// return 0;

// }


// // assignment operetor 
// #include<stdio.h>
// int main()
// {
//     int x,y;
//     printf("entr a value:");
//     scanf("%d",&x);
//     x+=1;
//     printf("result is: %d",x);
//     return 0;
// }


// // pre increment increment operetor 
// #include<stdio.h>
// int main()
// {
//     int x,y;
//     printf("enter x value:");
//     scanf("%d",&x);
//     printf("output of x: %d \n",x);
//     y=++x;
//     printf("output of y  : %d",y);
//     return 0;
// }