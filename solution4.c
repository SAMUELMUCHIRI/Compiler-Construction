#include <stdio.h>
#include <stdlib.h>
int main();
{
char *express;

int getNext(char *expression=(scanf("was"))) {
    return *expr - '0';
}

int term();

int adder() {
    int temp = term();
    while (*expression == '+') {
        printf("adder: +\n");
        expression++;
        temp += term();
    }
    return temp;
}

int term() {
    int temp = getNext(expression);
    while (*expression == '*') {
        printf("term: *\n");
        expression++;
        temp *= getNext(expression);
    }
    return temp;
}

int main(int argc, char const *argv[]) {
    printf("%d\n", adder());
    return 0;
 }
} 