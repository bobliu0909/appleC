#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>
#include "AppleWrapper.h" 
//#include "types.h"
//#include "list.h" 

int main(int argc, char **argv) 
{
    printf("argc: %d\n", argc);

    for(int i = 0; i < argc; i++)
    {
        printf("argv: %s\n", argv[i]);
    }

    struct tagApple * pApple;  
    pApple= GetInstance();  
    SetColor(pApple, 100);
    int color = GetColor(pApple);  
    printf("color = %d\n", color);  

    SetNum(pApple, 10);
    SetNum(pApple, 11);
    SetNum(pApple, 14);
    SetNum(pApple, 12);

    printf("count = %d\n", NumCount(pApple));
    printf("num = %d\n", GetNum(pApple));
    printf("num = %d\n", GetNum(pApple)); 
    printf("num = %d\n", GetNum(pApple)); 
    printf("num = %d\n", GetNum(pApple)); 
    printf("count = %d\n", NumCount(pApple));    
    printf("num = %d\n", GetNum(pApple));
    ReleaseInstance(&pApple);  
    return 0;
}

