#include<iostream>
#include"tower.h"
using namespace std;

void toh(int n,char from,char to,char aux)
{
    if(n==1)
    {
        printf("move 1 from %c to %c\n",from,to);
        return;
    }
    toh(n-1,from,aux,to);
    printf("move %d from %c to %c\n",n,from,to);
    toh(n-1,aux,to,from);
}