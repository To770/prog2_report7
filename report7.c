/*点数が高い順に並び替えるための関数*/

#include <stdio.h>

void sort(int array[], int size);/*関数プロトタイプ宣言*/

void sort(int array[], int size){
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            int num = array[i];
            if(array[i] < array[j]){
                array[i] = array[j];
                array[j] = num;
            }
        }
    printf("%d ", array[i]);
    }
}

int main(){
    /*定数として配列のサイズを宣言*/
    const int SIZE = 6; 
    int scores[SIZE] = {100, 60, 70, 100, 90, 80};

    printf("scores = ");
    for(int i = 0; i < SIZE; i++){
        printf("%d ", scores[i]);
    }
    printf("\nresults = ");
    sort(scores, SIZE);
    printf("\n");

    return 0;
}