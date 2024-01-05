
#include "stdio.h"
 
 
int main()
{
    int Arr[1000] = {};
    int N;
    
    scanf("%d",&N);
    for(int i = 0; i< N; i++){
        scanf("%d",&Arr[i]);
    }
    for(int k = 0; k< N; k++){
        printf("%d: ",k+1);
        for(int j = 0; j < N; j++){
            if(k != j){
                if(Arr[k] > Arr[j]){printf("> ");}
                else if(Arr[k] < Arr[j]){printf("< ");}
                else{printf("= ");}
            }
        }
        printf("\n");
    }
 
    return 0;
}

