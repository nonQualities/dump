//bubble sort
# include <stdio.h>
void sort(int array[], int size){
    for(int i=0; i < size-1;i++){ //this is the number of passes we need to make to sort the array
        for(int j=0;j < size-i-1; j++ ){ //this is the actual comparision loop
/* the time complexity of the bubble sort is not good, and after every pass, the array is
divided into two parts, the part where the biggest values(in each iterations) have
bubbled up to the end of the array, and thus we need not to scan that part, so,
we use the condition for j as size-i-1, as the array is already sorted till i-1 by, that
particular value of i.
*/
            if(array[j]>array[j+1]){ //to make it descending order, just change the
            //inequality here.
                int temp = array[i];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void printArray(int array[], int size){
    for(int i = 0; i < size; i++){
       printf("%d", array[i]); 
    }
}

int main(){
    int array[] ={9,3,4,6,0,1,5,7,8};
    int size = sizeof(array)/sizeof(array[0]);
    sort(array, size);
    printArray(array, size);

    return 0;

}