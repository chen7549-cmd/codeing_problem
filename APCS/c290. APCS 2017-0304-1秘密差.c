#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[1005]; 
    scanf("%s", str);

    int A=0,B=0;
    int len=strlen(str);

    for (int i=0;i<len;i++) {
        int digit=str[i]-'0';
        if (i%2==0) {
            B+=digit;  
        } else {
            A+=digit;  
        }
    }

    printf("%d\n", abs(A - B));
    return 0;
}