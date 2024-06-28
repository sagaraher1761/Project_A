#include <iostream>

int main(void)
{
    int num1 = 10;
    int *const ptrNumber = &num1;
    // num1 = 50; //OK
    *ptrNumber = 50;
    printf("Num1 : %d\n", num1);       // 50
    printf("Num1 : %d\n", *ptrNumber); // 50: Dereferencing
    int num2 = 20;
    // ptrNumber = &num2; //Not OK
    return 0;
}
