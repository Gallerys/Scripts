#include <stdio.h>      // Standard I/O functions
#include <stdlib.h>     // General-purpose functions and memory management
#include <string.h>     // String manipulation functions
#include <math.h>       // Mathematical functions
#include <ctype.h>      // Character classification and conversion functions
#include <stdbool.h>    // Boolean type and values
#include <stddef.h>     // Standard definitions and macros
#include <stdint.h>     // Integer types with specific sizes
#include <time.h>       // Date and time functions
#include <limits.h>     // Limits for data types
#include <assert.h>     // Debugging assertions
#include <stdarg.h>     // Variable-length argument lists
#include <errno.h>      // Error codes
#include <fcntl.h>      // File control options
#include <unistd.h>     // System calls (POSIX)
#include <signal.h>     // Signal handling
#include <pthread.h>    // POSIX threads (multithreading)
#include <sys/types.h>  // System-specific data types
#include <sys/stat.h>   // File status information

int main()
{
    int a, b;
    a =5; b = 10;
    printf("first number is %d, and second number is %d \n", a, b);

    printf("Intger size : %lu\n", sizeof(int));

    printf("Float size : %d\n", sizeof(float));

    printf("Double size : %d\n", sizeof(double));

    printf("The minmum value of INT = %lu\n", INT_MIN);

    printf("The maximum value of INT = %lu\n", INT_MAX);

    printf("The minmum value of INT = %lu\n", LONG_MIN);

    printf("The maximum value of INT = %lu\n", LONG_MAX);




    int a, b;
    printf("Please enter number : ");
    scanf("%d %d", &a, &b);
    printf("Your value is : %d %d", a, b);



    int a = 50;
    if (a > 33 && a < 100){

        printf("Congratulation");
    }
    else{

        printf("Sorry");
    }





    int taka, i;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter amount : ");
        scanf("%d", &taka);
        if (taka <= 200)
        {
            printf("Dhaka\n");
        }
        else{
            printf("Coxbazar\n");
        }
    }







    int a;
    printf("Enter value : ");
    scanf("%d", &a);

    if (a % 3 == 0 && a % 5 == 0)
    {
        printf("This is correct number : %d", a);
    }
    else
    {
        printf("Wrong");
    }






    int input;
    printf("Enter input : ");
    scanf("%d", &input);

    if (input % 2 == 0){
        printf("EVEN \n");
    }
    else{
        printf("Odd \n");
    }






    char ch;
    printf("Enter charecter : ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
    








    int x;
    printf("Enter value : ");
    scanf("%d", &x);

    switch (x)
    {
        case 1:
        printf("Number 1");
        break;

        case 2:
        printf("Number 2");
        break;

        default:
        printf("Error");
    }






    int i, j, k;

    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");   
    }






    // a-z charector print
    char ch;
    for (ch = 'A'; ch <= 'Z'; ch++)
    {
        printf("%c ", ch);
    }




    struct Students
    {
        int id, roll, age;
        float cgpa;
        char name[26];

    };

    int main()
    {
        struct Students table;
        printf("Enter name : ");
        scanf("%s", table.name);

        printf("Enter ID : ");
        scanf("%d", &table.id);
        
        printf("Enter roll : ");
        scanf("%d", &table.roll);

        printf("Enter cgpa : ");
        scanf("%f", &table.cgpa);

        printf("Enter Age : ");
        scanf("%d", &table.age);

        printf("*******************************\nName : %s \nID : %d \nRoll : %d; \nCGPA : %f \nAge : %d", table.name, table.id, table.roll, table.cgpa, table.age);
                    



    int a[7] = {4, 5, 8, 9, 23, 73, 77};
    int i;
    for (i = 0; i < 7; i++)
    {
        printf("%u \n", &a[i]);
    }





     printf("It is Code Store");

    int n1, n2, n3;

    printf("Enter a number: ");
    
    scanf("%d", &n1);

    printf("First Number is %d", n1);
    
    printf("Enter another number: ");
    
    scanf("%d", &n2);

    printf("Enter another number: ");
    
    scanf("%d", &n3);

    int sum = n1 + n2;
    
    printf("Sum: %d\n", sum);
    printf("Input : ",n1);

    for(int i = 2; i=4; i++)
    {
        printf("for loop");

    for (int i = 1; i <= 5; i++) {
        
        printf("%d\n", i);
    }   
        
    }
    
    return 0;
}

// %d = int ; 1, 44, 55
// %c = char ; A, #, R
// %f = flot ; 1.5, 5.90, 10.6
// && full minimg "and"
// || full mining "or"
