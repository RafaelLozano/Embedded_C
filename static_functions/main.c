#include<stdio.h>
int Main=100;
void chage_clock(int system_clock);
extern void Function_file1(void);

int main(int argc, char const *argv[])
{
    printf("El valor de Main es:%d\n",Main);
    chage_clock(100);
    Function_file1();

        return 0;
}
void chage_clock(int system_clock)
{
    printf("system clock changed to %d\n", system_clock);
}