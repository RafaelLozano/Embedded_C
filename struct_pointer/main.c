#include <stdio.h>
#include <stdint.h>

struct DataSet
{
    int data_1;
    int data_2;
    int data_3;
    int data_4;
};

void displayMemberElements(struct DataSet *pData);

int main(int argc, char const *argv[])
{
    struct DataSet data1;
    data1.data_1=10;
    data1.data_2=20;
    data1.data_3=30;
    data1.data_4=40;

   displayMemberElements(&data1);

    return 0;
}
void displayMemberElements(struct DataSet *pData)//function using parameter using reference
{
    printf("Data 1= %d \n", pData->data_1);
    printf("Data 2= %d \n", pData->data_2);
    printf("Data 3= %d \n", pData->data_3);
    printf("Data 4= %d \n", pData->data_4);
}