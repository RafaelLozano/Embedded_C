#include<stdio.h>
#include<stdint.h>

int main() 
{
    const uint8_t data=10;
    uint16_t *ptr=(uint16_t*) &data;
    *ptr=150;
    printf("%d",data);
    return 0;
}