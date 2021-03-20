#include<stdio.h>
int a, b, c;
/*
Types of Functions:
    Library Fn: Fn included in C Header File
    User-Defined Fn: Functions created by Programmers
*/
// Functions either to be Created before main() Function or to be Called

// Function 1 : w/o arg && w/o ret val
void func_1()
{
    printf("Function 1 : Takes No args and Returns No Value\n");    
}

// Function 2 : w/o arg && w/ ret val
int number()
{
    int i;
    printf("Function 2 : Enter a Number: ");
    scanf("%d",&i);
    printf("The Number You Entered is %d\n",i);
    return i;
}
// Function 3 : w/ arg && w/o ret val 
void star(int n)
{
    printf("Function 3 : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%c\n",'*');
        
    }
    
    
}    
// Function 4 : w/ arg && w/ ret val
int sum(int a, int b)
{
    printf("Function 4 : ");
    printf("%d + %d = ",a,b);

    return a+b;
}

// main() function starts here
int main()
{
    int c;
    // int num;
    func_1(); // Function_1 Called
    number(); // Function_2 Called
    star(13);
    c = sum(5,2);
    printf("%d",c); // Function_4 Called 
    return 0;
}
