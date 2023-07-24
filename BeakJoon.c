#include <stdio.h>
#include <string.h>

int main(){
    char a[1000000]; //문자열
    int space = 0; //공백

    scanf("%[^\n]s",a); //enter를 만날때까지 읽음

    if(a[0]!=' '){ 
    space++;
    }

    for(int i=1;i<strlen(a);i++){
        if(a[i-1]==' ' && a[i]!=' '){ 
            space++;
        }    
    } 

    printf("%d",space);

    return 0;
}