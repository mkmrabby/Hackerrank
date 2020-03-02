/******************************************************************************

Tak: You have to write a function int max_of_four(int a, int b, int c, int d) which reads four arguments 
and returns the greatest of them.

*******************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;

void increment(int *v) {
    (*v)++;
}

int main() {
    int a;
    scanf("%d", &a);
    increment(&a);
    printf("%d", a);
    return 0;
}  