// WAP to create the 3X3 matrix and print it
#include <stdio.h>
int main(){
    int n;
    int x=3,y=3;

    int a[x][y];
    a[0][0]=10;
    a[0][1]=20;
    a[0][2]=30;
    a[1][0]=40;
    a[1][1]=50;
    a[1][2]=60;
    a[2][0]=70;
    a[2][1]=80;
    a[2][2]=90;

    
    for(int i = 0;i<x;i++){
        for(int j=0;j<y;j++){
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    


}