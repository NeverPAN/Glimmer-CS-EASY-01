#include <stdio.h>

//辗转相除法
int gcd(int a, int b) {
    int temp;
    while (b!= 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int m, n;
    printf("输入两个数字(用空格隔开): ");
    scanf("%d %d", &m, &n);
    int result = gcd(m, n);
    printf(" %d 和 %d 的最大公约数是 %d.\n", m, n, result);
    return 0;
}