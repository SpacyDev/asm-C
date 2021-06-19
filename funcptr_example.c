#include <stdio.h>

int func_one()
{
    printf("Это первая функция\n");
    return 1;
}

int func_two()
{
    printf("Это вторая функция\n");
    return 2;
}

int main()
{
    int value;
    int (*function_ptr) ();

    function_ptr = func_one;
    printf("адрес указателя function_ptr 0x%08x\n", function_ptr);
    value = function_ptr();
    printf("возвращенное значение %d\n", value);

    function_ptr = func_two;
    printf("адрес указателя function_ptr 0x%08x\n", function_ptr);
    value = function_ptr();
    printf("возвращенное значение %d\n", value);
}