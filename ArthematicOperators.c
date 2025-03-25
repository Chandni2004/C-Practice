#include<stdio.h>

int add(int*, int*);
int sub(int*, int*);
int mul(int*, int*);
int div(int*, int*);
int mod(int*, int*);

int main()
{
    int p = 10, q = 20;
    
    printf("Address of p: %p\n", &p);
    
    printf("Address of q: %p\n", &q);

    printf("Addition: %d\n", add(&p, &q));

    printf("Subtraction: %d\n", sub(&p, &q));

    printf("Multiplication: %d\n", mul(&p, &q));

    printf("Division: %d\n", div(&p, &q));

    printf("Modulus division: %d\n", mod(&p, &q));
    
    return 0;
}

int add(int *x, int *y) {
    printf("\nInside add function:\n");
    
    printf("Address of x: %p\nAddress of y: %p\n",&x,&y);
    
    printf("Value of *x: %d\nValue of *y: %d\n", *x, *y);
    return *x + *y;
}

int sub(int *x, int *y) {
    printf("\nInside sub function:\n");
    
    printf("Address of x: %p\nAddress of y: %p\n",&x,&y);
    
    printf("Value of *x: %d\nValue of *y: %d\n", *x, *y);
    return *y - *x;
}

int mul(int *x, int *y) {
    printf("\nInside mul function:\n");
    
    printf("Address of x: %p\nAddress of y: %p\n",&x,&y);
    
    printf("Value of *x: %d\nValue of *y: %d\n", *x, *y);
    return (*x) * (*y);
}

int div(int *x, int *y) {
    printf("\nInside div function:\n");
    
    printf("Address of x: %p\nAddress of y: %p\n",&x,&y);
    
    printf("Value of *x: %d\nValue of *y: %d\n", *x, *y);
    return (*x) / (*y);
}

int mod(int *x, int *y) {
    printf("\nInside mod function:\n");
    
    printf("Address of x: %p\nAddress of y: %p\n",&x,&y);
    
    printf("Value of *x: %d\nValue of *y: %d\n", *x, *y);
    return (*x) % (*y);
}
