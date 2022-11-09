#include<stdio.h>

int add(int a, int b){
    return a + b;
}

int main(){
    int a = 6;
    int b = 4;
    int ans = add(a, b);
    printf("Addition of %d and %d is %d\n", a, b, ans);
    return 0;
}
