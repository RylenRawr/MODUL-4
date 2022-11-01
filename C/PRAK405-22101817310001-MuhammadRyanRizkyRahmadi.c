#include <stdio.h>
int main (){
    int r,y,res,all;
    scanf("%d", &r);
    scanf("%d", &y);
    for(int n = 0; n<r; n++){
        for(int p = n; p>=0; p--){
            printf("(%d * %d)", p+1,y);
            if(p>0){
                printf(" + ");
            }
        }
        res+= (n+1)*y;
        printf(" = %d\n", res);
        all += res;
    }
    printf("%d",all);
}