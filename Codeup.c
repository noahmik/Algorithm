#include <stdio.h>
int main() {

    int a[11],b;
    for(int i=1;i<=10;i++) {
    scanf("%d",&a[i]);
    }

    scanf("%d",&b);
    printf("%d",a[b]);


    return 0;
}

