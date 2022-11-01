#include <stdio.h>
int main() {
    int r, y, a;
    scanf("%d %d", &r, &y);
    if(r < y){
        for(a = r; a<= y; r++,y--){
            printf("%d ",r);
            printf("%d ",y);
            if(a < y){
                printf(" - ");
            }
        }
    }else if (r > y){
        for(a = y; a <= r; r--,y++){
            printf("%d ",r);
            printf("%d ",y);
            if(a < r){
                printf(" - ");
            }
        }
    }
}