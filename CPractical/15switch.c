#include <stdio.h>
void main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    switch (age)
    {
    case17:
        printf("You Can't Vote");
        break;

    case 18:
        printf("You Can Vote");
        break;

    case 19:
        printf("You must Vote");
        break;
        
    default:
        printf("You are not eligible to run this Program");
        break;
    }
}