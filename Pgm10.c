#include <stdio.h>

/* NANR */
void fun1()
{
    printf("NANR: No Argument, No Return\n");
}

/* ANR */
void fun2(int a)
{
    printf("ANR: Argument, No Return\n");
    printf("Value = %d\n", a);
}

/* NAWR */
int fun3()
{
    return 100;
}

/* AWR */
int fun4(int a, int b)
{
    return a + b;
}

int main()
{
    int result;

    fun1();

    fun2(10);

    result = fun3();
    printf("NAWR: No Argument, With Return\n");
    printf("Returned value = %d\n", result);

    result = fun4(20, 30);
    printf("AWR: Argument, With Return\n");
    printf("Sum = %d\n", result);

    return 0;
}
Output:
NANR: No Argument, No Return
ANR: Argument, No Return
Value = 10
NAWR: No Argument, With Return
Returned value = 100
AWR: Argument, With Return
Sum = 50
