#include <stdio.h>
int main()
{
  char a[50][50];
  int b[50],c[50],d;

  scanf("%d",&d);
  for(int i=1;i<=d;i++){
    scanf("%s %d",a[i],&b[i]); //2차원 배열에서는 & 쓰지않음
    c[i] = 1; // 시작은 1
  
  }
  for(int j=1;j<=d;j++){
    for(int x=1;x<=d;x++){
      if(b[j]<b[x]){
        c[j]++;
      } 
    }
  }
  for(int y=1;y<=d;y++){
    if(c[y]==3){
      printf("%s",a[y]);
    }
  }

  
}

