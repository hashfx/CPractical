#include<stdio.h>
void main()
{
    char name[32], address[128];
    printf("Enter your name: ");
    scanf("%s",&name);
    
    printf("Enter your address: ");
    scanf("%s",&address);

    printf("Your name is %s\n",name);
    printf("Your address is %s\n",address);
}
