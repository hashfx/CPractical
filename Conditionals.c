# include<stdio.h>
int main()
{
    int age;
    
    printf("\nEnter Your Age: ");
    scanf("%d",&age);

    if (age>=18) 
    {
        printf("Yea! You can Drive on the Roads of India!\n");
        printf("Drive Carefully; Happy Driving");
    }

    else if (age>16)
    {
        printf("Well, You can Apply for Learner's Licence for Gearless Vehicles which are below 50cc HorsePower!");
    }
    

    else
    {
        printf("What are you doing on this Earth!(#$!@)");
    }
    
    
    
    return 0;
}
