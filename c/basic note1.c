// //* slash \n break line 
// // * double slash \\ Inserts a backslash character
// //* \" 	Inserts a double quote character
// //* \t 	Creates a horizontal tab
// #include<stdio.h>
// int main()
// {
//     printf("use slash \n for line break understand");
//     printf("use double slash \\(*) for inser single slash \n");
//     printf("use slash t \t for vertical break \n");
//     return 0;
// }





// //Multi-line comments start with /* and ends with */
// #include<stdio.h>
// int main()
// {
//     printf("use of multiline commtent example \n ");
//     /*i am mahmud hossain
//     what is your name
//     */
//    printf("use of multiline comment example program");
//    return 0;

// }




// //int - stores integers (whole numbers), without decimals, such as 123 or -123
// //float - stores floating point numbers, with decimals, such as 19.99 or -19.99
// //char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
// #include<stdio.h>
// int main()
// {
//     int x=1234;
//     char latter='m';
//     float number=1.23;
//     printf("int value: %d \n",x);
//     printf("chat value: %c \n",latter);
//     printf("float value: %f \n",number);
//     return 0;
// }



// //Declare Multiple Variables
// // To declare more than one variable of the same type, use a comma-separated list:
// #include<stdio.h>
// int main()
// {
//     int x=2, y=3,z=4;
//     printf("sum of %d",x+y+z);
//     return 0;
// }




// //Basic Data Types of c
// // int 	    2 or 4 bytes 	Stores whole numbers, without decimals
// // float 	4 bytes 	Stores fractional numbers, containing one or more decimals. Sufficient for storing 7 decimal digits
// // double 	8 bytes 	Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits
// // char 	1 byte 	Stores a single character/letter/number, or ASCII values
// // %d or %i 	int 	
// // %f 	float 	
// // %lf 	double 	
// // %c 	char 	
// // %s 	Used for strings
// #include<stdio.h>
// int main()
// {
//     int x;
//     char y;
//     float z;
//     double a;
//     printf("int :%i \n",x);
//     printf("char :%c \n",y);
//     printf("float :%f \n",z);
//     printf("double: %lf \n",a);
// return 0;
// }



// //string types
// #include<stdio.h>
// int main()
// {
//     char name[]="mahmud";
//     printf("my name is: %s ",name);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {

//     char name=x;
//     printf("enter a name: ");
//     scanf("%c",x);
//     printf("the name is: %s",name);
//     return 0;

// }



// //Constants When you don't want others (or yourself) to override existing variable values, 
// //use the const keyword (this will declare the variable as "constant", which means unchangeable and read-only):
//When you declare a constant variable, it must be assigned with a value:
//const int minutesPerHour;
//minutesPerHour = 60; // error 
// #include<stdio.h>
// int main()
// {
//  const xy=1234;
//     xy=999;
//     printf("result :%d",xy);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int xy=1234;
//     xy=9999;
//     printf("result is: %d",xy);
//     return 0;
// }




// // Arithmetic oparetor  in c
// // Arithmetic operators
// //Assignment operators
// //Comparison operators
// //Logical operators
// //Bitwise operators
// // Operator 	Name 	Description 	Example 	Try it
// // + 	Addition 	Adds together two values 	x + y 	
// // - 	Subtraction 	Subtracts one value from another 	x - y 	
// // * 	Multiplication 	Multiplies two values 	x * y 	
// // / 	Division 	Divides one value by another 	x / y 	
// // % 	Modulus 	Returns the division remainder 	x % y 	
// // ++ 	Increment 	Increases the value of a variable by 1 	++x 	
// // -- 	Decrement 	Decreases the value of a variable by 1 	--x
// #include<stdio.h>
// int main()
// {
//     int x,y;
//     x=20;
//     y=2;
//     printf("result of division is: %d \n",x/y);
//     printf("result of modulas: %d \n",x%y);
//     printf("result of increment is: %d \n",++x);
//     printf("result of decrement is: %d \n",--y);
//     return 0;
// }





// // Assignment Operators
// // The addition assignment operator (+=) adds a value (-=) minus a value to a variable:
// //(*=)  multiplay and (/=) devided a values
// #include<stdio.h>
// int main()
// {
//     int x=10;
//     int y=10;
//     int z=10;
//     int a=10;
//     int b=10;
//     x+=5;
//     y-=5;
//     z*=2;
//     a/=2;
//     b%=3;
//     printf("result is : %d \n",x);
//     printf("result is: %d \n",y);
//     printf("result is :%d \n",z);
//     printf("result is: %d \n",a);
//     printf("result is: %d \n",b);
//     return 0;
// }

// // define string values
// #include<stdio.h>
// int main()
// {
// char x[]="mahmud";
// printf("enter x:%s",x);
// return 0;
// }







// //Conditions and If Statements

//     // Use if to specify a block of code to be executed, if a specified condition is true
//     // Use else to specify a block of code to be executed, if the same condition is false
//     // Use else if to specify a new condition to test, if the first condition is false
//     // Use switch to specify many alternative blocks of code to be executed
//     // Less than: a < b
//     // Less than or equal to: a <= b
//     // Greater than: a > b
//     // Greater than or equal to: a >= b
//     // Equal to a == b
//     // Not Equal to: a != b
// #include<stdio.h>
// int main()
// {
//     int x,y;
//     printf("enter two number x and y:");
//     scanf("%d %d",&x,&y);
//     if(x>y)
//     {
//         printf("x is bigger then y:%d",x);
//     }
//     else if(x<y)
//     {
//         printf("y is bigger then x: %d",y);
//     }
//     else if(x==y)
//     {
//         printf("x and y is equal: %d",x);
//     }
//     else if (x!=y)
//     {
//         printf("x and y is not equal: %d",x);
//     }
//     return 0;
// }


// //alter if else You can simply write
// #include<stdio.h>
// int main()
// {
//     int x,y;
//     printf("enter two number:");
//     scanf("%d %d",&x,&y);
//     (x<y)? printf("x is smaller then y"):(x>y)? printf(" x is bigger then y"): printf("x is equal to y");
//     return 0;
    
// }





// // Switch Statement
// // Instead of writing many if..else statements, you can use the switch statement.
// // The switch statement selects one of many code blocks to be executed:
// #include<stdio.h>
// int main()
// {
//     int x=10;
//     printf("enter the value of x:");
//     scanf("%d",&x);
//     switch (x)
//     {
//     case 0:
//         printf("under number:");
//         break;
//     case 10:
//         printf("right number:");
//         break;
    
//     default:
//         break;
//     }
// }

// //The default Keyword
// // The default keyword specifies some code to run if there is no case match:
// #include<stdio.h>
// int main()
// {
//     int x=5;
//     printf("enter a number :");
//     scanf("%d",&x);
//     switch (x)
//     {
//     case 0:
//         printf("enter good number");
//         break;
    
//     default:
//     printf("defout nu mber ");
//         break;
//     }
//     return  0;
// }

// Note: The default keyword must be used as the last statement in the switch, and it does not need a break.


// //for loop
// #include<stdio.h>
// int main()
// {
//     int x,i;
//     printf("enter the value of x:");
//     scanf("%d",&x);
//     for (i=0;i<x;i++)
//     {
//         printf("value of x is: %d",i);
//     }
//     return 0;

// }




// // Break and Continue
// // The break statement can also be used to jump out of a loop.
// #include<stdio.h>
// int main()
// {
//     int x=100;
//     int i;
// for(i=0;i<x;i++)
// {
//     if(i%2==0)
//     {
//         if (i==10)
//         {
//             break;
//         }
//         printf("the even value is: %d \n",i);

//     }
// }
//     return 0;
// }



// Continue
// The continue statement breaks one iteration (in the loop), if a specified condition occurs, 
// and continues with the next iteration in the loop.
#include<stdio.h>
int main()
{
    int x=10;
    int i;
    for (i=0;i<x;i++)
    {
        // printf("pre values: %d ",i);
        if (i==5)
        {
            continue;
        }
        printf("after values: %d \n",i);
    }
    return 0;
}