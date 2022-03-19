/* -----------------------------------------------------------------------------
* 파일 : Q4.c
* 기능 :기말고사 Q4 -  Float Type 실수 이진수로 출력
* 개발자 : [F003], 202020678 김동준
* 개발 시작 : 2020-06-26
* 개발 종료 : 2020-06-26 (fail) 4자리 끊어서 출력 실패
*-------------------------------------------------------------------------------*/



#include <stdio.h> 
#pragma warning (disable:4996)

void printBinary(int n, int i)
{

   // 이진수 변환  
    int k;
    for (k = i - 1; k >= 0; k--) {

        if ((n >> k) & 1)
            printf("1");
        else
            printf("0");
    }
}
//IEEE형식 구조체 선언
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

//결과 출력 함수
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
