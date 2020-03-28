#include<stdio.h>
#include<stdint.h>

int main(void)
{
    uint8_t *p;
    uint8_t i=0x12;
    uint8_t someData[10] = {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,};

    someData[1]=0x19;
    for (size_t i = 0; i < 10-1; i++)
    {
        printf("El valor del %d elemento es: %x\n",i,someData[i]); //quivalen a lo mismo
    }
    
}