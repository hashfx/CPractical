#include<stdio.h>
int main()
{
    int age;
    printf("Enter Your Age: ");
    scanf("%d", &age);
    
    if (age<18)
    {
        goto a;
    }
    else
    {
        goto b;
    }
// Declaring GOTO label here:
    a:
    printf("You can't Vote!");

    b:
    printf("You can Vote!");
    return 0;
}
