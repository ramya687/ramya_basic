#include <stdio.h>
int main(){
    int arr[4];
    int arr1[3][5]={{1,2,3,4,6},
                    {1,2,3,4,5},
                    {1,2,3,4,7}};
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            printf("%d",arr1[i][j]);
        }
        printf("\n");
    }
}