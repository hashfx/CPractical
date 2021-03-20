#include <stdio.h>
int main()
{
    int num, index = 0;
    printf("Enter a Number: ");
    scanf("%d", &num);
    /*
    Do While Loop executes at least once even in case of False Condition 
    First It Executes the (Do) Statement and then enters in the While Loop, aka ExitControllerLoop
    */
    do 
    {
        index = index + 1;
        printf("%d\n", index);
    } while (index < num); // Do above steps while index < num ;; Also notice ";" at the end
    // Output [1,num] Both Digits Inclusive

    return 0;
}