/* 20151117 by Alendubri */
/* This is the Test of C file for tutorial on Git */
#include "theTest.h"
#include <stdio.h>

int main()
{
        int retVal = 0;

        retVal = printTheHello();

        return retVal;
}

int printTheHello( void )
{
        return  printf("Hola, Mundo!\n");
}

