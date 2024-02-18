#include<stdio.h>

int main (){
    float a,b,c;
    printf ("enter the value of the fractional number a : ");
    scanf ("%f",&a);
    printf ("enter the value of the fractional number b : ");
    scanf ("%f",&b);
    printf ("enter the value of the fractional number c : ");
    scanf ("%f",&c);
    if (a-b>0 && a-c>0 && b-c>0){
        printf ("a is maximun , b is second maximum and c is minimum");
    }
    else if (a-b>0 && a-c>0 && c-b>0){
        printf ("a is maximun , c is second maximum and b is minimum");
    }
    else if (b-a>0 && b-c>0 && a-c>0){
        printf ("b is maximum , a is second maximum and c is minimum");
    }
    else if (b-a>0 && b-c>0 && c-a>0){
        printf ("b is maximum , c is second maximum and a is minimum");
    }
    else if (c-a>0 && c-b>0 && a-b>0){
        printf ("c is maximum , a is second maximum and  b is minimum");
    }
    else if (c-a>0 && c-b>0 && b-a>0){
        printf ("c is maximum , b is second maximum and  a is minimum");
    }
    return 0;
}

