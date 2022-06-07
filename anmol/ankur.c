#include<stdio.h>

int main(){

{  int  a ,b,c ,d ;

int sq[4][4]={ {a,b,c,d},{(d+1),(c-1),(b-3),(a+3)},{(b-2),(a+2),(d+2*1),(c-2)},{(c+1),(d-1),(a+1),(b-1)}};
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
scanf("%d",&d);
if ((a+d + 4)==(b+d)){
  
    for( int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d  ", sq[i][j]);
        }
       printf("\n");
    }
}else{
    printf("the magic square from given number may not be perfect \n do you still want to continue \n  1: yes\n2:no");
    int op;
    scanf("%d",&op);
    switch(op){
        case 1:
        for( int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d  ", sq[i][j]);
        }
       printf("\n");
        }break; 

    case 2:
     return main();
    }
}
  

    return 0;
}
}