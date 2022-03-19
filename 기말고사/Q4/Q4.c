/* -----------------------------------------------------------------------------
* ���� : Q4.c
* ��� :�⸻��� Q4 -  Float Type �Ǽ� �������� ���
* ������ : [F003], 202020678 �赿��
* ���� ���� : 2020-06-26
* ���� ���� : 2020-06-26 (fail) 4�ڸ� ��� ��� ����
*-------------------------------------------------------------------------------*/



#include <stdio.h> 
#pragma warning (disable:4996)

void printBinary(int n, int i)
{

   // ������ ��ȯ  
    int k;
    for (k = i - 1; k >= 0; k--) {

        if ((n >> k) & 1)
            printf("1");
        else
            printf("0");
    }
}
//IEEE���� ����ü ����
typedef union {

    float f;
    struct
    {

        // Order is important. 
        // Here the members of the union data structure 
        // use the same memory (32 bits). 
        // The ordering is taken 
        // from the LSB to the MSB. 
        unsigned int bin : 32;
        unsigned int mantissa : 23;
        unsigned int exponent : 8;
        unsigned int sign : 1;
      

    } raw;
} myfloat;

//��� ��� �Լ�
void printIEEE(myfloat var)
{

    // Prints the IEEE 754 representation 
    // of a float value (32 bits) 

   
    printf("Sign            =%d  ", var.raw.sign);
    printf("\n");
    printf("Exponent        =");
    printBinary(var.raw.exponent, 8);
    printf("\n");
    printf("Mantissa        =");
    printBinary(var.raw.mantissa, 23);
    printf("\n");
}

int main()
{

    // Instantiate the union 
    myfloat var;

    while (1)
    {
    back:
        printf("Enter a float-type real number (0 to exit): ");
        
        scanf("%f", &var.f);
        if (var.f == 0)
            break;
        printf("** Binary representation = ");
        printBinary(var.raw.bin,32);
        printf("\n");
        printIEEE(var);
        goto back;

    }
}
