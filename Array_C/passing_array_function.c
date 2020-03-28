#include<stdio.h>
#include<stdint.h>

void print_array(uint8_t *array_in, uint8_t size);

int main() {
    uint32_t n = 5;
    uint8_t array[n];
    for (size_t i = 0; i < n; i++)
    {
        array[i]=0xFF;
    }
    //Si no sabemos el tamaño del array se calcula
    n=sizeof(array)/sizeof(uint8_t);
    printf("El tamaño del array es %d\n",n);

    print_array(array,n);
    return 0;
}
void print_array(uint8_t *array_in, uint8_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        printf("%x,",array_in[i]);
    }
    printf("\n");
}