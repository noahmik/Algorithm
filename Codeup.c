#include<stdio.h>
 
int main(){
    
    int i_num;
    scanf("%d",&i_num);
    
    int bin_arr[1000] = {};
    int i_Cnt = 0;
    
    for(int i=0; i_num > 0; i++ ){
        
        bin_arr[i] = i_num % 2;
        i_num /= 2;
        i_Cnt++;
    }
    
    i_Cnt -= 1;
    if(i_Cnt < 0){printf("%d",bin_arr[0]);}
    else{
        for(int j = i_Cnt; j>=0; j--){
            
            printf("%d",bin_arr[j]);
        }
    }
    return 0;
}
 
