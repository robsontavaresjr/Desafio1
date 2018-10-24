//
// Created by Robson Tavares Júnior on 24/10/18.
//

#ifndef ALGORITMIA_39917_DESAFIO1_H
#define ALGORITMIA_39917_DESAFIO1_H
#include <stdio.h>
//----------------------------------
//********** Challenge #1 **********
//----------------------------------

int um() {

    int x;
    int result;

    printf("The following lines shows f(x) = x**2 for [2,9]\n");

    //powering by 2 with for-loop a range from 2 to 9
    for (x = 2; x <= 9; x = x + 1) {

        result = pow(x, 2);
        printf("f(%d) = %d \n\n", x, result);


    }

    return 0;
}

//----------------------------------
//********** Challenge #2 **********
//----------------------------------

int dois(){

    int x;
    int result;

    printf("The following lines shows f(x) = x**2 for [2,9] and f(x) = 2*x for [10,19]\n");

    //powering by 2 with for-loop a range from 2 to 9
    for(x=2; x<=19; x = x+ 1) {

        if(x<= 9) {
            result = pow(x, 2);
            printf("f(%d) = %d \n\n", x, result);
        } else {
            result = 2 * x;
            printf("f(%d) = %d \n\n", x, result);
        }


    }

    return 0;
}

//----------------------------------
//********** Challenge #3 **********
//----------------------------------

int tres(){

    int x, result, a, b;

    a=0;
    b=0;

    //headline of the program
    printf("The following lines shows f(x) = x**2 for [2,9] and f(x) = 2*x for [a, b] which will be inputted by the user\n\n");

    //collecting user input
    while(a <= 0){
        printf("Lower bounder ? ");
        scanf("%d", &a);
        if(a < 0){
            printf("Please input a positive integer\n");
        }
    }

    while(b <= 0){
        printf("Upper bounder ? ");
        scanf("%d", &b);
        if(b < 0){
            printf("Please input a positive integer\n");
        }
    }

    //powering by 2 with for-loop a range from 2 to 9
    for(x=a; x<=b; x = x+ 1) {

        if(x<= 9) {
            result = pow(x, 2);
            printf("f(%d) = %d \n\n", x, result);
        } else {
            result = 2 * x;
            printf("f(%d) = %d \n\n", x, result);
        }


    }

    return 0;
}

//********** Challenge #4 **********
//----------------------------------
//----------------------------------

int quatro(){

    int x, y, result, a, b;

    a=0;
    b=0;

    //headline of the program
    printf("The following lines shows f(x, y) = (x-y)^2 for x in [2,9] and (2x-y) for x > 9\n\n x is [a, b] and y [2, 4]\n\n");

    //collecting user input
    while(a <= 0){
        printf("Lower bounder ? ");
        scanf("%d", &a);
        if(a < 0){
            printf("Please input a positive integer\n");
        }
    }

    while(b <= 0){
        printf("Upper bounder ? ");
        scanf("%d", &b);
        if(b < 0){
            printf("Please input a positive integer\n");
        }
    }

    //applying the function
    for(y=2; y<=4; y = y + 1) {
        for(x=a; x<=b; x = x + 1) {

            if(x<= 9) {
                result = pow(x-y, 2);
                printf("f(%d, %d) = %d \n\n", x, y,  result);
            } else {
                result = (2 * x) - y;
                printf("f(%d, %d) = %d \n\n", x, y, result);
            }


        }
    }

    return 0;
}

//********** Challenge #5 **********
//----------------------------------
//----------------------------------

int cinco(){

    int x, y, result, a, b, c, d;

    a=0;
    b=0;
    c=0;
    d=0;

    //headline of the program
    printf("The following lines shows f(x, y) = (x-y)^2 for x in [2,9] and (2x-y) for x > 9\n\n x is [a, b] and y [c, d]\n\n");


    //collecting user input for x
    while(a <= 0){
        printf("Lower bounder ? ");
        scanf("%d", &a);
        if(a < 0){
            printf("Please input a positive integer\n");
        }
    }


    while(b <= 0){
        printf("Upper bounder ? ");
        scanf("%d", &b);
        if(b < 0){
            printf("Please input a positive integer\n");
        }
    }

    //collecting user input for y
    while(c <= 0){
        printf("Lower bounder ? ");
        scanf("%d", &c);
        if(c < 0){
            printf("Please input a positive integer\n");
        }
    }

    while(d <= 0){
        printf("Upper bounder ? ");
        scanf("%d", &d);
        if(d < 0){
            printf("Please input a positive integer\n");
        }
    }

    //applying the function
    for(y=c; y<=d; y = y + 1) {
        for(x=a; x<=b; x = x + 1) {

            if(x<= 9) {
                result = pow(x-y, 2);
                printf("f(%d, %d) = %d \n\n", x, y,  result);
            } else {
                result = (2 * x) - y;
                printf("f(%d, %d) = %d \n\n", x, y, result);
            }


        }
    }

    return 0;
}

#endif //ALGORITMIA_39917_DESAFIO1_H
