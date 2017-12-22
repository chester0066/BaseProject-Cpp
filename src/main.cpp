#include <stdio.h>
#include "main.h"

#ifndef TEST
int main() {
    int StoneCount;
    printf("請輸入石頭數量:\n");
    scanf("%d",&StoneCount);
    printf("可以進行%d抽:",getDrawCount(StoneCount));
    return 0;

}
#endif // TEST

int addNumber(int a, int b) {
    return a + b;
}
int getDrawCount(int StoneCount){
return StoneCount/3;
if(StoneCount<0) return 0;


}

int getTriangleType(int a, int b, int c) {
    if (a > b && a > c) {
        int temp = c; c = a; a = temp;
    }
    else if (b > a && b > c) {
        int temp = c; c = b; b = temp;
    }

    if (a + b <= c) {
        return -2;
    }
    else if (a * a + b * b == c * c) {
        return 0;
    }
    else if (a * a + b * b > c * c) {
        return 1;
    }
    else if (a * a + b * b < c * c) {
        return -1;
    }
    return -3;
}
