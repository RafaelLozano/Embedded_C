#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char string_1[]="Rafael Lozano";
    char string_2[10]="Ingeniero";
    printf("Nombre:%s\n",string_1);
    printf("Puesto:%s\n",string_2);

    int tam=sizeof(string_1)/sizeof(string_1[0]);//null character counts 13+1
    int tam2=strlen(string_1);//this function don´t count null character

    printf("Tamaño string 1 (sizeof): %d\n",tam);
    printf("Tamaño string 1 (strlen): %d\n", tam2);
    return 0;
}
