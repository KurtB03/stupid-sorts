/* 
Faith Sort, only Checks if the array is sorted 
and relys on your faith to accutally do so.
*/

void faithSort(int* in, int lenght){
    bool sorted  = false;

    while(!sorted){
        sorted = true;
        for(int i = 1; i < lenght; i++){
            if(in[i] > in[i-1]){
                sorted = false;
                break;
            }
        }
    }
}
