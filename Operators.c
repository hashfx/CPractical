#include<stdio.h>
int main()
{
    // Declare Varibles along with its DataType
    int a,b,d,e,f,g,h;
    float c;
    // Define Variables
    a = 27;
    b = 6;
    c = 1.3;
/* ARITHMETIC OPERATORS */
    printf("a + b = %d\n",a+b); // %d for Integers
    printf("a - c = %f\n",a-c); // %f for Float
    printf("a x b = %d\n",a*b);
    printf("a / b = %d\n",a/b); // Observe Result; its Integer.
/* RELATIONAL OPERATORS */
    // If a=b THEN It shows 1 as TRUE OR 0 as FALSE
    printf("Is a = b: %d\n",a==b);
    printf("Is a != b: %d\n",a!=b);
    printf("Is a > b: %d\n",a>b);
    printf("Is a < b: %d\n",a<b);
    printf("Is a >= b: %d\n",a>=b);
    printf("Is a <= b: %d\n",a<=b);
/* LOGICAL OPERATORS */
    printf("a AND b = %d\n",a&&b); // Returns 1 for TRUE; 0 for FALSE: Integers are Always True 
    printf("a OR b = %d\n",a||b); // Returns 1 for TRUE; 0 for FALSE: One TRUE value is enough for returning 1
    printf("a NOT b = %d\n",!b); // Returns 1 for TRUE; 0 for FALSE:
/* BITWISE OPERATORS */ 
    d = 2;
    e = 3;
    // & means both values are true
    // | means any one or both values are true
    // ^ means Exclusive OR (XOR): One value should be True, Other being False
    // ~ is the Binary One's Complement Operator
    // << is the Binary Left Shift Operator
    // >> is the Binary Right Shift Operator
    printf("d AND e: %d\n",d&e); // First:Convert both numbers into Binary form(10,11); Second:Find AND of (10,11)
/* ASSIGNMENT OPERATORS */
    f = 7; // SimpleAssignmentOperator(=): Assigns Values from Right side operands to Left Side Operand
    printf("f = f + 1: %d\n",f+=1);// AddAndAssignmentOperator(+=): Adds Right Operand AND Left Operand and Assigns Result To Left Operand
    printf("f = f - 1: %d\n",f-=1);// SubtractAndAssignmentOperator(-=): Subtracts Right Operand FROM Left Operand and Assigns Result To Left Operand
    printf("f = f * 1: %d\n",f*=1);// MultiplyAndAssignmentOperator(*=): Multiplies Right Operand BY Left Operand and Assigns Result To Left Operand
    printf("f = f / 1: %d\n",f/=1);// DivideAndAssignmentOperator(/=): Divides Right Operand by Left Operand and Assigns Result To Left Operand
/* MISCELLANEOUS OPERATORS */
    // sizeof(): Length of DataType 
    // &: Returns Actual Address of Variable
    // *: Pointer to a Variable
    // ?: : Conditional Expression: If condIsTrue ? Then Value X: Else Y
    
    return 0;
}