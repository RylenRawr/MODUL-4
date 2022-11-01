#include <stdio.h>
int main(){
    int r,y;
    char a;
    printf("Angka Kelipatan \t =");
    scanf("%d %c",&y,&a);
        for (r=1; r <=50; r++){
            if(r%y==0){
                printf("%c ", a);
            }
            else{
                printf("%d ", r);
            }
        }
}