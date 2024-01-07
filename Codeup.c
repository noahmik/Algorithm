#include <stdio.h>

    int main(){       
    int a[51]={},b,c,d;
    scanf("%d",&b);
    for(int i=1;i<=b;i++) {
        scanf("%d",&d);
        a[d]=1;
    } 
    for(int j=1;j<=b;j++) {
        if(a[j]==0){
            c=j;
        }
    }

    printf("%d",c);

    return 0;
}
