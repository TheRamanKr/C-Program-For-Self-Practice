int zeroCount = 0;
    int oneCount = 0;
    for(int i=0; i<size; i++){
        if(arr[i] == 0){
            zeroCount++;
        }
        if(arr[i] == 1){
            oneCount++;
        }
    }

// 

int index = 0;
while(zeroCount--){
    arr[index] = 0;
    index++;
}
while(oneCount--){
    arr[index] = 1;
    index++;
}