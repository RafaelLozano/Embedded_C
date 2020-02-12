#include <stdio.h>
#include <stdint.h>
typedef struct
{
    char data_1;
    int data_2;
    char data_3;
    short data_4;
}DataSet_t;

int main()
{
    DataSet_t data;
    data.data_1 = 0x11;       //char
    data.data_2 = 0xFFFFEEEE; //int
    data.data_3 = 0x22;       //char
    data.data_4 = 0xABCD;     //short

    uint8_t *ptr = (uint8_t *)&data;
    uint32_t totalSize = sizeof(DataSet_t);
    for (size_t i = 0; i < totalSize; i++)
    {
        printf("%p ,   %X\n", ptr, *ptr);
        ptr++;
    }
    printf("Total memory by this structure: %d bytes", totalSize);

    return 0;
}
