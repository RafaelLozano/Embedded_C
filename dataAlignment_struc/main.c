#include<stdio.h>
#include<stdint.h>
struct DataSet
{
    char data_1;
    int data_2;
    char data_3;
    short data_4;
};

int main() {
    struct DataSet data;
    data.data_1 = 0x11;
    data.data_2 = 0xFFFFEEEE;
    data.data_3 = 0x22;
    data.data_4 = 0xABCD;

    uint8_t *ptr = (uint8_t *) &data;
    uint32_t totalSize=sizeof(struct DataSet);
    for (size_t i = 0; i < totalSize; i++)
    {
        printf("%p ,   %X\n",ptr,*ptr);
        ptr++;
    }
    printf("Total memory by this structure: %d bytes",totalSize);
    


    return 0;
}
